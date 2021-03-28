#include "Candidate.hpp"
#include <algorithm>
//#include <cstdlib>
#include <iostream>
#include <cmath>


int myrandom(int i) { return std::rand() % i; }

Candidate::Candidate(int geneRange, int ID)	: score(0), distance(0), isParent(false)
{
	// build gene pool
	std::vector<int> genePool;
	for (int i = 1; i < geneRange; ++i) genePool.push_back(i);
	// create random genes
	std::random_shuffle(genePool.begin(), genePool.end(), myrandom);
	// genetic expression
	genotype = genePool;
	// (candidates always begin and end at 'home' location (0)
	genePool.insert(genePool.begin(), 0);
	genePool.push_back(0);
	// physical expression
	phenotype = genePool;
	this->ID = ID;
}

Candidate::~Candidate() {}

std::vector<int> Candidate::getGenotype() {	return this->genotype; }
std::vector<int> Candidate::getPhenotype() { return this->phenotype; }
float Candidate::getDistance() { return this->distance; }
float Candidate::getScore() { return this->score; }
bool Candidate::getIsParent() {	return this->isParent; }

void Candidate::printStats()
{
	std::cout << "ID: " << ID << ", Score: " << score << ", Distance: " << distance << ", Is Parent: " << isParent << std::endl;
}

void Candidate::printGenoType()
{
	for (auto g : genotype)
	{
		std::cout << g;
	}
	std::cout << std::endl;
}

void Candidate::printPhenoType()
{
	for (auto p : phenotype)
	{
		std::cout << p;
	}
	std::cout << std::endl;
}

void Candidate::Measure(Locations l)
{
	std::vector<Coords> locs = l.getLocs();
	for (int i = 0; i < phenotype.size() -1; i++)
	{
		float x2 = (locs[this->phenotype[i + 1]].x) - (locs[this->phenotype[i]].x);
		float y2 = (locs[this->phenotype[i + 1]].y) - (locs[this->phenotype[i]].y);
		this->distance += std::hypot(x2, y2);
	}
}
