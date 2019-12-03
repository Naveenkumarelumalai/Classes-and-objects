#include <iostream>

using namespace std;

class Rectangle
{
	int length;
	int breadth;
	public:
		~Rectangle()             // Destructor
		{
			cout << "Destructor" << endl;
		}
		void setDimension(int l, int b)
		{
			length = l;
			breadth = b;
		}
		int getArea()
		{
			return length * breadth;
		}
		Rectangle()              // Constructor
		{
			cout << "Constructor" << endl;
		}
		
};

int main()
{
	Rectangle rt;
	rt.setDimension(7, 4);
	cout << rt.getArea() << endl;
	return 0;
}
