#include <iostream>
using namespace std;

int main() {
    // Declare variables for user input
    int x, y;
    
    // Prompt user for input
    cout << "Please enter two integer values: ";
    cin >> x >> y;

    // Perform calculations
    int sum = x + y;
    int subtraction = x - y;
    int product = x * y;
    double average = (x + y) / 2.0;
    int remainder = x % y;

    // Display results
    cout << "The sum of x and y: " << sum << endl;
    cout << "The subtraction of x and y: " << subtraction << endl;
    cout << "The product of x and y: " << product << endl;
    cout << "The average of x and y: " << average << endl;
    cout << "The remainder of x divided by y: " << remainder << endl;

    // Define dimensions of a basketball court
    int length = 15;
    int width = 28;
    int area = length * width;
    int perimeter = (2 * length) + (2 * width);

    // Display area and perimeter
    cout << "The area of the basketball court: " << area << endl;
    cout << "The perimeter of the basketball court: " << perimeter << endl;

    return 0;
}
