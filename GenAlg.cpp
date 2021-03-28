#include <iostream>
#include "Locations.hpp"
#include "Candidate.hpp"
#include "Population.hpp"
#include <ctime>

int main() 
{
	std::srand(unsigned(std::time(0)));
	const int POPULATION_SIZE = 100;

	Locations testLoc(std::vector<Coords> { Coords(-1.0f, -1.0f), Coords(0.0f, -1.0f), Coords(1.0f, -1.0f),
											Coords(-1.0f, 0.0f), Coords(1.0f, 0.0f),
											Coords(-1.0f, 1.0f), Coords(0.0f, 1.0f), Coords(1.0f, 1.0f) });
	
	Population popA(testLoc.getLocs().size(), POPULATION_SIZE);

	testLoc.printLocs();
	popA.printPopulation();

	return 0;
}