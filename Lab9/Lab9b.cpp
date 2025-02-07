#include <iostream>
using namespace std;
int main()
{
    float x;
   float sum1 = 0, sum2 = 0;
     int count = 0;
     int arr[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter the value of element " << i + 1 << ": ";
        cin >> arr[i];
    }
    for (int i = 0; i < 10; i++)
    {
        sum1 += arr[i];
    }
    x = sum1 / 10;
      cout << "\nAverage of array elements: " << x << endl;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] >= x)
        {
            sum2 += arr[i];
            count++;
        }
    }
    cout << "Average of array elements greater than x: " << sum2 / count << endl;
}
