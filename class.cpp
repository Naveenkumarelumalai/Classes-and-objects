#include <iostream>

using namespace std;

class Rectangle
{
	
		int breadth;        //breadth of rectangle
	public:
		int length;         //length of rectangle
		int getArea()
		{
			return length * breadth;
		}
};

int main()
{
	Rectangle rt;
	rt.length = 7;
	rt.breadth = 4;
	int area = rt.getArea();
	cout << "Area : " << area << endl;
	return 0;
}
