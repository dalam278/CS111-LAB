#include <iostream>
using namespace std;
void swap3Int(int &x, int &y, int &z)
{
    x = x + y + z;  
    y = x - (y+z);
    z = x - (y+z);  
    x = x - (y+z);   
}
 
int main() {
int x = 5, y = 7, z = 9;
cout << "x = " << x  << ", y = " << y << ", z = " << z << endl;
swap3Int( x, y, z );
cout << "Swapped: " << endl;
cout << "x = " << x  << ", y = " << y << ", z = " << z << endl;
return 0;
}