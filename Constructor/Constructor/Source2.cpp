#include<iostream>
using namespace std;
class circle
{
private:
	int radius;
	float x,y;
public:
	circle()
	{
	}
	circle(int rr,float xx,float yy)
	{
		radius = rr;
		x=xx;
		y=yy;
	}
	circle(circle &c)
	{
		cout<<endl<<"copy constructor invoked";
		radius=c.radius;
		x=c.x;
		y=c.y;
	}
	void showdata()
	{
		cout<<endl<<endl<<"radius="<<radius;
		cout<<endl<<"x-coordinate="<<x;
		cout<<endl<<"y-coordinate="<<y;
	}
};

void main()
{
	circle c1(10, 2.5, 2.5);
	circle c2=c1;
	c1.showdata();
	c2.showdata();
}