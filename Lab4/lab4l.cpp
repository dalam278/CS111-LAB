// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;
   int main (){ 
  int n, center ;
  cout<< " Please enter a postive odd integer :";
     cin>>n;
  while ( n<0 || n%2==0) {
  cout << " Invalid number & try again ";
    cin >>n;
        }
        center= n/2 +1;
  for ( int i=1,h=n; i<=n; i++, h--) {
    for (int j = 1; j<=n ; j++) {
      if ( j> center && (j==i || j==h)) {
             cout <<"x";
      }
        else if ( j < center && (j==i || j==h)) {
            cout <<"+";
        }
         else if ( j==center & i== center ){
             cout << "*";
              }
              else {
                  cout << " ";
              }
               }
    cout << endl;
   }
   }