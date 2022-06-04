#include <iostream>
#include <cctype>
using namespace std;
 
int main() {
    int a;
    cin >> a;
    int number1, number2;
 
    int result = 1;
    cin >> number1;
    while (cin  >> number2) {
        if (number1 != number2) {
            result++;
        }
        number1 = number2;
    }
 
 
    cout << result;
 
    return 0;
 
}