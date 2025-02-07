#include <iostream>
using namespace std;
string upperCase(string s) 
{
for (int i = 0; i < s.length(); i++)
{
s[i] = toupper(s[i]);
}
return s;
}

string lowerCase(string s) 
{
for (int i = 0; i < s.length(); i++)
{
s[i] = tolower(s[i]);
}
return s;
}

void upperCaseVoid(string &s) 
{
for (int i = 0; i < s.length(); i++)
{
s[i] = toupper(s[i]);
}
return;
}

void lowerCaseVoid(string &s)
{
for (int i = 0; i < s.length(); i++)
{
s[i] = tolower(s[i]);
}
return;
}

void angry(string &s) 
{
string x = ".", y = "!";
size_t pos;
while ((pos = s.find(x)) != std::string::npos) {
s.replace(pos, 1, y);
}
return;
}

void fun(string &s) 
{
for (int i = 0; i < s.length(); i++)
{
s[i] = tolower(s[i]);
}
for (int i = 0; i < s.length(); i++)
{
if(s[i]=='a' || s[i]=='e' || s[i]=='i'|| s[i]=='o' || s[i] == 'u')
{
s[i] = toupper(s[i]);
}
}
return;
}


int main() 
{

string s = "This is so lame.";
s = upperCase(s);
cout << s <<endl;
s = lowerCase(s);
cout << s << endl;
upperCaseVoid(s);
cout << s <<endl;
lowerCaseVoid(s);
cout << s << endl;
string x = "This Is.Not.CoOol Man :X.";
angry(x);
cout << x << endl;
fun(x);
cout <<x<< endl;
return 0;
}