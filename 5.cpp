#include<iostream>
using namespace std;
class Point
{
private:
	int x=60, y=80;
public:
	void setPoint(int i, int j)
	{
		x = x + i;
		y = y + j;
	}
	void display()
	{
		cout <<"×ø±êÎª£º"<< "(" << x << "," << y << ")";
	}
};
int main()
{
	Point poi1;
	poi1.setPoint(10, 12);
	poi1.display();
}