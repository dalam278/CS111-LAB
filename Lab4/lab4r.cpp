#include<iostream>
using namespace std;
int main()
{ 
    for(int i=1;i<=5;i++)
    {
        if(i%2==1)  
        {
            for(int j=1;j<=3;j++)
            {
                cout<<"*"<<"\t";
            }
        }
        else
        {
            cout<<"  ";
            for(int j=1;j<=2;j++)
            {
                cout<<"*"<<"   ";
            }
        }
        cout << endl;
    }
    return 0;
}