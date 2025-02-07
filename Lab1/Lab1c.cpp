#include<iostream>
using namespace std;
   int main () {
      string name ;
	  int height ;
	 cout << "please enter your name :" ;
	  cin >> name ;
	  cout << " Hello " << name << endl;
	  cout << " please enter your height in inches : " ;
	    cin >> height;
		cout << "you are a : "  << height * 2.54 << " centimeter tall" << endl;
		 return 0;
		 }