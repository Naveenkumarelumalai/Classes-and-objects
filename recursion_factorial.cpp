#include <iostream>

using namespace std;

int factorial( int a ) /* function */
{
  if( a == 0 || a == 1)
  {
    return 1;
  }
  else
  {
  	int check=a*factorial(a-1);
  	cout<<check<<endl;
   return 0;//check;
  }
  
}

int main(){
  int n;

  cout << "Enter number" << endl;
  cin >> n;

  int fact  = factorial(n);

  cout << "Factorial of " << n << " is " << fact << endl;

  return 0;
}
