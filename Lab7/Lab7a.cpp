#include<iostream>
using namespace std;
string rectangle(int n) {
    if(n <= 1) {
        string output = "";
        for(int i = 0; i < 10; i++) {
            output += "*";
        }
        output += '\n';
        return output;
    }
    string output = "";
    for(int i = 0; i < 10; i++) {
        output += "*";
    }
    output += '\n';
    output += rectangle(n - 1);
    return output;
}
int main() {
    cout << rectangle(5) << endl;
    return 0;
}