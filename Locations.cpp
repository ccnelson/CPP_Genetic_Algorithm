#include "Locations.hpp"
#include <vector>
#include <iostream>

Locations::Locations(std::vector<Coords> c)
{
	locs = c;
}

Locations::~Locations() {}

std::vector<Coords> Locations::getLocs() { return this->locs; }

void Locations::printLocs()
{
	std::cout << "- - - - Locations - - - - " << std::endl;
	for (int i = 0; i < locs.size(); i++)
	{
		std::cout << "ID:" << i << ",\tX: " << locs[i].x << ",\tY: " << locs[i].y << std::endl;
	}
	std::cout << "- - - - - - - - - - - - - " << std::endl;
}
