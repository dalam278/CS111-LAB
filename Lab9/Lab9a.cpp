#include <iostream>

#include <time.h>

using namespace std;

int main()

{

int arr[50];

srand(time(0));
for(int i = 0; i<50; i++)

{

arr[i]=rand();

}

int max=arr[0];

int min=arr[0];

for(int i=1;i<50;i++)

{

if(arr[i]>max)

max=arr[i];

else if(arr[i]<min)

min=arr[i];

}

cout<<"Largest is "<<max<<" and Smallest is "<<min;

}