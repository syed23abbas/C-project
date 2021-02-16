// Cube.h
class Cube {
private:
	int side;
public:
	Cube();
	Cube(int s);
	void resize(int newLen);
	int getVolume();
};
