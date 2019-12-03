#include <iostream>
using namespace std;
int main(){
	string name;
	getline(cin, name);
	cout << name << endl;
	cout << name.find('l') << endl;
	return 0;
}
