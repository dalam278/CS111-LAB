#include <cstdlib>
#include <iostream>
#define size 100
using namespace std;
void rowSum(int arr[size][size] ,int m,int n){
int sum;
for(int i = 0; i < n; i++){
sum = 0;
for(int j = 0; j < m; j++){
sum = sum + arr[i][j]; 
}
cout<<"sum of "<<"row "<<i+1<<" is: " <<sum<<endl;
}
}
void columnSum(int arr[size][size], int m, int n){
int sum;
for(int i = 0; i < n; i++){
sum = 0;
for(int j = 0;j < m; j++){

sum = sum + arr[j][i]; 
}

cout<<"size of row "<<i + 1<<" is: "<<sum<<endl;

}

}

int main(int argc, char** argv) {

int arr[size][size], m ,n;

cout<<"Enter the size of row: ";

cin>>m;

cout<<"\nEnter the size of column: ";

cin>>n;

cout<<"\nEnter all the values between 0-99"<<endl;
for(int i = 0; i < m; i++){

for(int j = 0; j < n; j++){

cin>>arr[i][j];

}

}
cout<<"\nSum of each column: \n"<<endl;

columnSum(arr, m ,n);

return 0;

}