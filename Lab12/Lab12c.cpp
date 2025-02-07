#include <iostream>
#include <string>
#include <fstream>
using namespace std;
ifstream  inFile;
ofstream  outFile;
void writeFile(string input, string output)
{
    inFile.open(input);
    outFile.open(output);
    string line;
    while(getline(inFile, line))
    {
        outFile << line << endl;
    }
    inFile.close();
    outFile.close();
}
string rectangle(int n){
	string star="**********\n";
	if(n==0){
		return "";
	}
	else{
		return rectangle(n-1)+star;
	}
}
int main() {
	ofstream filein;
	filein.open("in.txt");
    filein<< rectangle(5) <<"\n";
    filein.close();
    writeFile("in.txt","out.txt");
    return 0;
}