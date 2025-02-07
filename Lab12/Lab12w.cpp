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
int fibonacci(int num){
	if (num<2){
		return num;
	}
	else{
		return(fibonacci(num-1)+fibonacci(num-2));
	}
}
int main(int argc,char*argv[]){
	if(argc !=2){
		cerr<<"not enough  number of arguements: "<<argc-1<<", Expected: "<<1;
		exit(1);
	}
	int n=stoi(argv[1]);
	if(n<0){
		cerr << "Input: " << argv[1] << " is not a positive number, positive number expected.";
        exit(1);
	}
		ofstream filein;
		filein.open("in.txt");
		filein<<fibonacci(n)<<"\n";
		filein.close();
		writeFile("in.txt","out.txt");
	
	return 0;
}