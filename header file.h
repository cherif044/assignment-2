using namespace std;
#include <iostream>
#include <cmath>

class point
{
private:
	float x, y;
public:
	point()
	{
		x = 0, y = 0;
	}
	point(float X, float Y)
	{
		x = X;
		y = Y;
	}
	void setx(float X)
	{
		x = X;
	}
	void sety(float Y)
	{
		y = Y;
	}
	float getx()
	{
		return x;
	}
	float gety()
	{
		return y;
	}
	void display()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
	float distance(point p)
	{
		return sqrt(pow(p.x - x, 2) + pow(p.y - y, 2));
	}
	
};
