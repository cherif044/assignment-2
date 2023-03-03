using namespace std;
#include <iostream>
#include <cmath>

class point
{
private:
	float x, y;
public:
	point()                    //default constructor
	{
		x = 0, y = 0;
	}
	point(float X, float Y)  //constructor
	{
		x = X;
		y = Y;
	}
	void setx(float X)       // x setter
	{
		x = X;
	}
	void sety(float Y)        //y setter
	{
		y = Y;
	}
	float getx()              // x getter
	{
		return x;
	}
	float gety()               // y getter
	{
		return y;
	}
	void display()              // displaying as (x,y)
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
	float distance(point p)             
	{
		return sqrt(pow(p.x - x, 2) + pow(p.y - y, 2));
	}
	
};
