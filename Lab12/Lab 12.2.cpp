#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream ofs ("in.txt");
    
    for (int i = 1; i <= 5; i++) {
        int row = (5 - i) * 2;
        for (int k = 0; k < row; k++) { cout << " "; ofs << " "; }
        for (int j = 1; j <= i; j++) {
            cout << "* "; ofs << "* ";
        }
        cout << endl; ofs << endl;
    }
    ofs.close ();
    
    ifstream ifs ("in.txt");
    ofstream osf ("out.txt");
    string line;
    while (getline (ifs, line)) osf << line << endl;
    ifs.close ();
    osf.close ();
    
    return 0;
  }