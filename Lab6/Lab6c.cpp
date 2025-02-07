#include <iostream>
using namespace std;
int numberOdd(int x, int y)
{
    if (x%2==1 && y%2==1)
    {
        return 2;
    }
    else if (x%2==1 || y%2==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int closest(double x)
{
    int y = (int)x; 
    double difference = x - y;  x;
    if(difference >= 0.5)
    {
        return y+1;
    }
    else
    {
        return y;
    }
}
int max(int a, int b, int c, int d)
{
    if(a>=b && a>=c && a>=d) 
    {
        return a;
    }
    else if(b>=a && b>=c && b>=d) 
    {
        return b;
    }
    else if(c>=a && c>=b && c>=d) 
    {
        return c;
    }
    else 
    {
        return d;
    }
}
int firstDigit(int x)
{
  while(x>0)
    {
        if(x<10)
        {
            return x;
        }
        x/=10;
    }
    return -1;
}

int main() 
{
    cout << numberOdd(7,8) << endl;
    cout << closest(3.75) << endl;
    cout << max(3,1,4,1) << endl;
    cout << firstDigit(19683) << endl;
      return 0;
}