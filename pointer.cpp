#include <iostream>

using namespace std;

int main(){
	int a = 1000000;
  	int *p;
  	p = &a;
  	cout << "p = " << p << endl;
  	cout << "*p = " << *p << endl;
  	cout << "&p = " << &p << endl;
  	cout << "*&p = " << &*p << endl;
	return 0;
}
