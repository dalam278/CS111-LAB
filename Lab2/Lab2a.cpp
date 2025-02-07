#include <iostream>
using namespace std;
int main() {
     int x, y , z;
   cout << " please enter three numbers : " ;
       cin >> x >> y >> z;
   
     if (x < y && y < z)
        {
       cout << "Increasing order";
          }
          
      else if  (x > y && y > z)
        { 
          cout << " decreasing order " ;
          }
  else 
        {
          cout << " Neither increasing or decreasing order";
        }
          
      return 0;
  }