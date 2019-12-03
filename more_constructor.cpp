#include <iostream>

using namespace std;

class A
{
	public:
		A(int l,int b)
		{
			
			cout << "Constructor of A" << endl;
			cout << "Area is" <<l*b<< endl;
		}
};

class B : public A
{
	public:
		int length;
		int breadth;
		B( int l,int b):A(l,b)
		{
			cout << "Constructor of B" << endl;
			int length=l;
			int breadth=b;
			cout << "length and breadth" <<length<<'\t'<<breadth<< endl;
		}
};

class C : public B
{
	public:
		C():B(20,30)
		{
			cout << "Constructor of C" << endl;
		}
};

int main()
{
	/*cout << "Creating object of A :" << endl;
	A a;
	cout << "Creating object of B :" << endl;
	B b;*/
	cout << "Creating object of C :" << endl;
	C c;
	return 0;
}
