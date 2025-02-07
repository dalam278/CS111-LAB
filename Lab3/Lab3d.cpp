#include <iostream>
using namespace std;
int main() {
    int num;
      cout << " please enter a number:  ";
          cin>> num;
            while ( num  <= 0 ) {
     cout << " invalid number ! try again ";
          cin>> num;
                  }
      cout << " your number in bianary in reverse order is : " <<  "  " << endl;
           while ( num >0 )  { 
             cout << num%2 << endl ;
              num/=2;
             }
                return 0;
            }