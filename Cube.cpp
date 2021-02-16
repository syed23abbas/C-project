// Cube.cpp
#include <iostream>
#include "Cube.h"
using namespace std;

Cube::Cube();

Cube::Cube(int s) {
	side = s;
}

void Cube::resize(int newLen) {
	side = newLen;
}

int Cube::getVolume() {
	return side * side * side;
}
