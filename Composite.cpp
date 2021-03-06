// Composite.cpp
#include <iostream>
#include "Composite.h"
using namespace std;

Composite::Composite(Cube* cube, int counts) {
	cubes = cube;
	count = counts;
}

int Composite::getTotalVolume() {
    int volume = 0;
    for (int i = 0; i < count; i++) {
        volume += cubes[i].getVolume();
	}
	return volume;
}
