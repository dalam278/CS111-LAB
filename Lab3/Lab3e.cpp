#include <iostream>
using namespace std;

int main()
{
int num;
cout << "Enter a Positive Integer:\n";
cin >> num;
while ( num <= 0 )
  
{
cout << "Invalid Input! Try Again:\n";
cin >> num;
  return 0;
}
  
   int rem, sum = 0;
 while (num > 0) {

       rem = num % 10; 
      num = num / 10; 
    if (rem % 2 == 1)
      sum = sum + rem;

}
  
cout << "The sum of odd digits in the number is " << sum;
return 0;
}