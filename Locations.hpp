#pragma once
#include <vector>

struct Coords
{
	float x;
	float y;
	Coords() : x(0), y(0) {}
	Coords(float a, float b) { this->x = a; this->y = b; }
};

class Locations
{
private:
	std::vector<Coords> locs;

public:
	Locations(std::vector<Coords>);
	~Locations();

	std::vector<Coords> getLocs();
	void printLocs();

protected:
};
