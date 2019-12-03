#include <iostream>
#include <string>

using namespace std;

class Student	//base class
{
	protected:
	string name;
	public:
		string getName()
		{
			return name;
		}
		void setName( string n )
		{
			name = n;
			cout<<name.at(2)<<endl;
		}
		void printAbout()
		{
			cout << "I am a student" << endl;
		}
		
};

class Undergraduate : public Student	//derived class
{
	public:
	/*	void printAbout()
		{
			cout << "I am an Undergraduate" << endl;
			Student s1;
			s1.printAbout();
		}
		void setstring( string n )
		{
			name = n;
			cout<<name.at(2)<<endl;
		}*/
};

int main()
{	Student s;
	Undergraduate u;
	string name;
	cout<<"Enter the student name";
	cin>>name;
	u.setName(name);
	//s.printAbout();
	u.printAbout();
	return 0;
}
