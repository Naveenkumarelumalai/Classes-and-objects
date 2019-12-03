#include <iostream>
int main(){

	using namespace std;

	int marks[3];
	float average;
	cout << "Enter marks of first student" << endl;
	cin >> marks[0];
	cout << "Enter marks of second student" << endl;
	cin >> marks[1];
	cout << "Enter marks of third student" << endl;
	cin >> marks[2];
	int *check= marks+2;
    cout << "marks : " << marks+1 <<'\t' << *check << endl;  
	average = ( marks[0] + marks[1] + marks[2] )/ 3.0;
	cout << "Average marks : " << average << endl;

	return 0;
}
