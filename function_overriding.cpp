#include <iostream>

using namespace std;

class Animals
{
	public:
	  void sound()
		{
			cout << "This is parent class" << endl;
		}
	//protected:
			void printArea(int x, int y)
		{
			cout << x * y << endl;
		}
		void printArea(int x)
		{
			cout << x * x << endl;
		}
		void printArea(int x, double y)
		{
			cout << x * y << endl;
		}
		void printArea(double x)
		{
			cout << x * x << endl;
		}
};

class Dogs : public Animals
{
	public:
		void sound()
		{
			cout << "Dogs bark" << endl;
		}
		
};

int main()
{
	Animals *a;
	Dogs d;
	a=&d;
	a->sound();
	Animals rt;
	rt.printArea(2,4);
	rt.printArea(2,5.1);
	rt.printArea(10);
	rt.printArea(2.3);
	return 0;
}
