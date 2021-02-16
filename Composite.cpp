// Composite.cpp
#include <iostream>
#include "Composite.h"
#include "Cube.h"
using namespace std;

Composite::Composite(Cube* cubes, int count) {
	cubes = new Cube[count];
}

int Composite::getTotalVolume() {
    int volume = 0;
    for (int i = 0; i < count; i++) {
        volume += cubes[i]::getVolume();
	}
}
