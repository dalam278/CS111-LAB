#include <iostream>
using namespace std;
int oddLessEven(int n){
int sumOdd = 0, sumEven = 0;
int rem;
while(n != 0){
rem = n % 10;
if(rem % 2 == 1) //odd
sumOdd += rem;
else
sumEven += rem;
n = n / 10;
}

return sumOdd - sumEven;
}

int main(){
cout << oddLessEven(23) << endl;
cout << oddLessEven(1234) << endl;
cout << oddLessEven(777) << endl;
return 0;
}