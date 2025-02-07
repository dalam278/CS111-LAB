#include<iostream>

using namespace std;

int main()
{
      int a1,a2, a3;
        cout << " Please enter number for a1 in degrees :"<<endl;
           cin>> a1;
           cout << " Please enter number for a2in degrees :"<<endl;
           cin>> a2;
           cout << " Please enter number for a3 in degrees :"<<endl;
           cin>> a3;
           if ( a1+a2+a3 == 180) 
           {
              cout << " Traingle can be formed\n";
              if ( a1== 60  && a2==60 && a3 == 60)  
              {
                cout<< " This is a Equilateral traingle " ;
              }
              else if((a1 == 90) ||(a2 == 90) || (a3 == 90))
              {
                 cout<<"\nRight Angled Triangle."<<endl;
              }
              else 
              {
                cout << "Not a equalaterial or right traingle";
              }
            }
            else  
            {
              cout << " invalid number and trinagle can not be formed " ;
            }
             return 0;
     
           
    
}