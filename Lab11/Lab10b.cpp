#include <iostream>
#include <string>
using namespace std;
string blowsPast(string &s){
string y="blew";
s.replace(s.find("blows"),5,y);
return s;
}
string notLame(string &f){
string y="not lame";
f.replace(f.find("lame"),4,y);
return f;
}

string amazing(string &x){
string y="amazing";
x.replace(x.find("lame"),4,y);
return x;
}

string wow(string &x){
string y="amazing";
x.replace(x.find("this is pretty amazing"),22,y);
return x;
}
int main() {
string s = "This blows!";
cout << "Before:\t" << s << endl;
blowsPast(s);
cout << "After:\t" << s <<endl<< endl; 
string w = "The wind blows!";
cout << "Before:\t" << w << endl;
blowsPast(w);
cout << "After:\t" << w << endl << endl; 
string f= "The class is lame!";
cout << "Before:\t" << f<< endl;
notLame(f);
cout << "After:\t" << f << endl << endl; 
string x = "Ngl, this is pretty lame!";
cout << "Before:\t" << x << endl;
amazing(x); 
cout << "After:\t" << x << endl << endl;
cout << wow(x) << endl;
return 0;
}