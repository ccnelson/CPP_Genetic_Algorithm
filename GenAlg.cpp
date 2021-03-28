#include <iostream>
#include "Locations.hpp"
#include "Candidate.hpp"
#include "Population.hpp"
#include <ctime>

int main() 
{
	// random seed
	std::srand(unsigned(std::time(0)));
	// set constants
	const int POPULATION_SIZE = 10;

	// instantiate
	Locations testLoc(std::vector<Coords> { Coords(-1.0f, -1.0f), Coords(0.0f, -1.0f), Coords(1.0f, -1.0f),
											Coords(-1.0f, 0.0f), Coords(1.0f, 0.0f),
											Coords(-1.0f, 1.0f), Coords(0.0f, 1.0f), Coords(1.0f, 1.0f) });
	
	Population popA(testLoc.getLocs().size(), POPULATION_SIZE);

	// measure routes
	popA.measurePopulation(testLoc);

	// find mean
	float totalDistance = 0;
	for (auto x : popA.getPopulation())
	{
		totalDistance += x.getDistance();
	}
	float mean = totalDistance / popA.getPopulation().size();

	// apply scores
	for (auto& x : popA.getPopulation())
	{
		x.setScore(10 / (x.getDistance() / mean));
	}

	// show results
	testLoc.printLocs();
	popA.printPopulation();

	return 0;
}