#include <bits/stdc++.h>  
using namespace std;    
int factorialOfn(int number){       
      if(number==0 || number==1)   
      return 1;
      
      return number*factorialOfn(number-1);   
}
int main()
{
      int number;               
      cout<<"Enter the number to find the factorial : "; 
      cin>>number;    
      int answer = factorialOfn(number);   
      cout<<"The factorial of "<<number<<" is "<<answer; 
}