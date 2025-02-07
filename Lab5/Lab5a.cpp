#include <iostream>
using namespace std;
double countChange(int quarters, int dimes, int nickels, int pennies) {
return quarters * 0.25 + dimes * 0.1 + nickels * 0.05 + pennies * 0.01;
}
 int main() {
int q = 10, d = 5, n = 1, p = 2;
double x = countChange(q, d, n, p);
cout << "You have $" << x << endl;
}