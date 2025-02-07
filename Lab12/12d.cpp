#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void writeToFile(string, string);
void cloneFile(string, string);
string cross(int);
string triangle(int);
int fibonacci(int);

ifstream inputFile;
ofstream outputFile;


int main(int argc, char * argv[]) {
    int pattern1_size = stoi(argv[1]);
    int pattern2_size = stoi(argv[2]);
    int fib_digit = stoi(argv[3]);
    
    if (argc != 4) {
        cerr << "Incorrect number of arguments: "<< argc - 1 <<", Expected: " << 3;
        exit(1);
    }
    else if (pattern1_size % 2 == 0 || pattern1_size < 1) {
        cerr << "First argument must be an odd positive integer: " << pattern1_size;
        exit(1);
    }
    else if (pattern2_size % 2 == 0 || pattern2_size < 1) {
        cerr << "Second argument must be an odd positive integer: " << pattern2_size;
        exit(1);
    }
    else if (fib_digit < 1) {
        cerr << "Third argument must be greater than 0: " << fib_digit;
        exit(1);
    }
    
    string text = cross(pattern1_size) + 
                  "\n\n" + triangle(pattern2_size) + 
                  "\n\nFibonacci digit number " + to_string(fib_digit) + 
                  " is " + to_string(fibonacci(fib_digit)) + ".\n";
    
    writeToFile(text, "in.txt");
    cloneFile("in.txt", "out.txt");
}

void writeToFile(string text, string filename) {
    outputFile.open(filename);
    outputFile << text;
    outputFile.close();
}

void cloneFile(string original, string copy) {
    inputFile.open(original);
    outputFile.open(copy);
    string line;
    
    while(getline(inputFile, line)) {
        outputFile << line << endl;
    }
    
    inputFile.close();
    outputFile.close();
}

string cross(int size) {
    int left_cursor = 0;
    int increment = 1;
    string pattern = "";
    
    for (int row = 0; row < size; row++) {
        for (int inset = 0; inset < size; inset++) {
            int right_cursor = (size - inset) - 1;
            if (left_cursor == inset)
                if (row == size / 2) {
                    pattern += "* ";
                }
                else {
                    pattern += "+ ";
                }
            else if (right_cursor == left_cursor) {
                pattern += "X ";
            }
            else {
                pattern += "  ";
            }
        }
        pattern += "\n";
        left_cursor += increment;    
        if (left_cursor > (size / 2) - 1)
            increment *= -1;
    }
    return pattern;
}

string triangle(int size) {
    string pattern = "";
    for (int row = 1; row <= size; row++) {
        for(int column = 0; column < size; column++) {
            if (column < size - row){
                pattern += "  ";
            }
            else {
                pattern += "* ";
            }
        }
        pattern += "\n";
    }
    return pattern;
}

int fibonacci(int n) {
    if (n == 2) {return 1;}
    if (n <= 1) {return 0;}
    return fibonacci(n - 2) + fibonacci(n - 1);
}

