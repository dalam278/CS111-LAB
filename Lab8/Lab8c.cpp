#include <iostream>
using namespace std;
void print_space(int space)
{
    if (space == 0)
        return;
    cout << " "<< " ";
    print_space(space - 1);
}
void print_asterisk(int asterisk)
{
    if (asterisk == 0)
        return;
    cout << "* ";
    print_asterisk(asterisk - 1);
}
void triangle(int n)
{
    static int num=n;
    if (n == 0)
        return;
    print_space(n - 1);
    print_asterisk(num - n + 1);
    cout << endl;
  triangle(n - 1);
}
  int n = 6; 
 int main()
  {
    triangle(6);
    return 0;
}