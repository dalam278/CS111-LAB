#include <iostream>
using namespace std ;
int main() {
  int price;
   cout << " plese enter the price for the shoes :  ";
          cin >> price;
     if ( price >= 125 )
     {
       cout << " The Reduce price is : " << ( price * 0.9) << endl;
     }
         else 
     {
       cout << "That does not qualify for a discount. shoe price is : " << price <<  endl;
     }
  
}