#include <iostream>
using namespace std;
int count = 0;
void pyramid(int n)
{
    if(n!=0)
    {
        for(int i=n; i<n+count; i++)
        {
          cout << "  ";
        }
        for(int i=0; i<(2*n)-1; i++)
        {
            cout << "* ";
        }
        
        cout << endl;
        count++;
        
        pyramid(n-1);
    }
}
int main()
{
    pyramid(5);

    return 0;
}