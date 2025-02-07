#include <iostream>
using namespace std;
int secondDigit(int num){
  if(num - (num%10) == 0) return -1;
  if(num - (num%100) == 0) return num%10;
  return secondDigit(num/10);
    }
int main(){
    cout << secondDigit(7295)<< endl;
    cout << secondDigit(14385)<< endl;
    cout << secondDigit(294312)<<endl;
    return 0;
}