#include <iostream>
using namespace std;
int sum2 (int& sum, int& x, int& y)
{
 sum += x + y;
 return sum;
}
int main() {
int sum = 0, a = 5, b = 10, c = 12, d = 14;
cout << "Current sum = " << sum << endl;
sum2(sum, a, b);
cout << "Current sum = " << sum << endl;
sum2(sum, c, d);
cout << "Current sum = " << sum << endl;
sum2(sum, a, d);
cout << "Current sum = " << sum << endl;
return 0;
}