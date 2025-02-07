#include<iostream>
using namespace std;

int main (){
int i, j, matrix[5][5];
cout << "Enter the matrix elements : ";

for (i = 0; i<5; i++) 

{

for (j = 0; j<5; j++) 

cin>>matrix[i][j];

}

cout << "The display matrix is : "<< "   "<<endl;

for (i = 0; i<5; i++) 

{

for (j = 0; j<5; j++) 

cout<<matrix[i][j] <<"\t";

cout <<endl;

}

return 0;

  }