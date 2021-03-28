#pragma once
#include "Candidate.hpp"

class Population
{
private:
	std::vector<Candidate> population;

public:
	Population(int geneRange, int n);
	~Population();

	std::vector<Candidate>& getPopulation();
	void printPopulation();
	void measurePopulation(Locations l);

protected:

};