#pragma once
#include <vector>
#include "Locations.hpp"

class Candidate
{
private:
	std::vector<int> genotype;
	std::vector<int> phenotype;
	float distance;
	float score;
	bool isParent;
	int ID;

public:
	Candidate(int geneRange, int ID);
	~Candidate();

	std::vector<int> getGenotype();
	void printGenoType();

	std::vector<int> getPhenotype();
	void printPhenoType();

	void Measure(Locations l);

	float getDistance();
	float getScore();
	bool getIsParent();

	void printStats();

protected:

};