// Composite.h
class Composite {
private:
	Cube* cubes;
	int count;
public:
	Composite(Cube* cubes, int count);
	int getTotalVolume();
};
