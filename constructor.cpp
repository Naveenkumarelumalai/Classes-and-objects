#include <iostream>

using namespace std;

class Rectangle
{
		int length;
		int breadth;
	
		public:
			void set(int a,int b);
			Rectangle( int l, int b )
			{
				length = l;
				breadth = b;
			}
			int getArea()
			{
				return length * breadth;
			}
};
void Rectangle:: set(int a, int b)
{
	length=a;
	breadth=b;
}

int main()
{
	Rectangle rt(7,4);
	rt.set(7,5);
	cout << "Area : " << rt.getArea() << endl;
	return 0;
}
