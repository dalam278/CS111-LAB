#include <iostream>
using namespace std;
void Pattern(int n)
{
    for (int i = 1; i <= n; i++) {
        for (int k = n - i; k > 0; k--) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int num;
    cout << "Enter Positive odd integer:" << endl;
    cin >> num;
    if (num%2!=0){
    Pattern(num);
    cout << endl;
        }
        else {cout<<"Wrong input";}

}