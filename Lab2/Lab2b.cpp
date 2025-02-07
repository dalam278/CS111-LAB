#include <iostream>
using namespace std;
int main() {
  int grade;
   cout << "please eneter your grade in number :";
        cin >> grade;
    if ( grade > 80 )
    {
      cout << " grade : A"<< endl;
    }
   else if ( grade >=60 )
    {
     cout << " grade :B "<< endl;
     }
  else if ( grade >= 50 )
  {
     cout << " grade :c "<< endl;
  }
   else if ( grade >= 45 ) 
   {
      cout << " grade :   D "<< endl;
     }
   else 
   {
     cout << " grade : F " << endl;
   }
  return 0;
}