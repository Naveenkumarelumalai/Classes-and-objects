#include <iostream>
int main(){
    using namespace std;
    int n = 1;
    while(n < 10){
        if (n == 5){
        n = n + 1;
      	    continue;
        }
        cout << "n = " << n << endl;
        n++;
    }
    return 0;
}
