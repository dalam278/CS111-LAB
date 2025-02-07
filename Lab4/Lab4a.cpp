#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    
    for(int i=1; i<=10; i++){
        sum = 0;
        for(int j=1; j<=i; j++){
            sum += j;
            if(i != j){
              cout << j << " + ";  
            }
            else{
              cout << j << " ";
            }
        }
        cout << "= " << sum << "\n";
    }

    return 0;
}