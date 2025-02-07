#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream ofs ("in.txt");
    
    for (int i = 5; i > 0; i--) {
        for (int j = i; j > 0; j--) {
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