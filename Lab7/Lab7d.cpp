#include<iostream>
using namespace std;
int digitSum(int num)
{
if(num==0)
{
return 0;
   }
else
{
return(num%10 + digitSum(num/10));
}
    }
int main()
{
cout<<digitSum(1992)<<endl;
cout<<digitSum(234)<<endl;
cout<<digitSum(2234)<<endl;
}