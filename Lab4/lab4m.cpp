#include <iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int n, i, j;
    cout<<"Enter n: ";
    cin>>n;
    if(n%2==0){
        cout<<"Exiting Program!!!";
        exit(0);
    }
    for(i=1;i<=n;i++)
    {
      for(j=1;j<=n;j++)
      {
          if((j==i)||(j==n+1-i))
            cout<<"*";
          else
            cout<<" ";
      }
      cout<<endl;
    }
    return 0;
}