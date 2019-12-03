#include <iostream>

using namespace std;

class B;       //declaration of class B

class A
{
	int value;
	public:
		A()
		{
			value = 5;
		}
		friend int sum(A, B);     // declaring friend function
};

class B
{
	int value;
	public:
		B()
		{
			value = 3;
		}
		friend int sum(A, B);     // declaring friend function
};

int sum( A a, B b )             // friend function definition
{
	return (a.value + b.value);
}

int main()
{
	A a;
	B b;
	cout << "Sum : " << sum( a, b ) << endl;
	return 0;
}
