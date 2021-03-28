#pragma once
#include <vector>

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

	float getDistance();
	float getScore();
	bool getIsParent();

	void printStats();

protected:

};