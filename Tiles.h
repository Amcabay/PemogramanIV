#pragma once
#include <iostream>

using namespace std;

class Tiles {
private:
	int coord[2];
public:
	virtual ~Tiles() = default;
	virtual void draw() = 0;
	virtual void use() = 0;
	void setCoord(int x, int y)
	{
		coord[0] = x;
		coord[1] = y;
	}
	void showCoord()
	{
		cout << "[" << coord[0] << "," << coord[1] << "]";
	}
};

class OrdinaryTile : public Tiles {
public:
	void draw()
	{
		cout << "T";
	}
	void use() {};
};

class Rocket : public Tiles {
public:
	void draw()
	{
		cout << "R";
	}
	void use()
	{
		cout << "Bomb on "; showCoord(); cout << " Explode";
	}
};

class Bomb : public Tiles {
public:
	void draw()
	{
		cout << "D";
	}
	void use()
	{
		cout << "Dynamite on "; showCoord(); cout << " Explode";
	}
};

class Rubick : public Tiles {
public:
	void draw()
	{
		cout << "R";
	}
	void use()
	{
		cout << "Rubick on "; showCoord(); cout << " Activated";
	}
};