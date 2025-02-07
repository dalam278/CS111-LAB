#include <iostream>
using namespace std;
void pyramid(int n, int i){ 
    if(n==0) 
     return;
    for(int j=0; j<n; j++)
     cout<<"  ";
    for(int j=0; j<2*i+1; j++)
     cout<<"* ";
    cout<<endl;
    pyramid(n-1, i+1); 
}
void pyramid(int n){ 
   pyramid(n, 0); 
}

int main(){
    pyramid(5); 

    return 0;
}