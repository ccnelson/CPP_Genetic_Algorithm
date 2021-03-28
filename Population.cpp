#include "Population.hpp"
#include <iostream>

Population::Population(int geneRange, int n)
{
	for (int i = 0; i < n; i++)
	{	
		population.push_back(Candidate(geneRange, i));
	}
}

Population::~Population() {}

std::vector<Candidate> Population::getPopulation() { return this->population; }

void Population::printPopulation()
{
	for (auto p : population)
	{
		p.printStats();
		p.printPhenoType();
		std::cout << "- - - - - - - - " << std::endl;
	}
}

