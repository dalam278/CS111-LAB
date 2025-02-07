#include <iostream>
#include <cmath>
using namespace std;
int sumDigits (int number){
int sumdigit =0 ;

while(number!=0){
sumdigit = sumdigit + number%10; 
number = number/10;

}
return sumdigit;
}

string isSmall( float f1,float f2) {

string str;
float epsilon = 0.001f;
if(fabs(f1 - f2) < epsilon){
str = "true"; 
}else{
str="false"; 
}

return str;
}

char randomLetter (){
char c;
char words[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G','H', 'I', 'J', 'K', 'L', 'M', 'N','O', 'P', 'Q', 'R', 'S', 'T', 'U','V', 'W', 'X', 'Y', 'Z' };
srand(time(NULL)); 

c = words[rand()%26];

return c; 
}
void sort3 ( int a, int b, int c){
int numbers[3];
numbers[0] = a;
numbers[1] = b;
numbers[2] = c;
int temp ; 

for(int i =0;i<3;i++){
for(int j =i+1;j<3;j++){
if(numbers[i]>numbers[j]){ 
temp = numbers[i];
numbers[i]=numbers[j];
numbers[j]=temp;
}
}
}
cout<<"\n sort numbers : ";
for(int i =0;i<3;i++){
cout<<" "<< numbers[i];
}
  }
int main() {

cout << "\n sumDigits : "<<sumDigits(65536) << endl;

cout << "\n isSmall : "<<isSmall(3.1455,3.1456)<<endl;

sort3(123,500,120); 

char a = randomLetter(); 
cout<<"\n randomLetter : "<< a<<endl;

return 0;

}
