#include <iostream>
#include <cctype>
using namespace std;
 
int main() {
    int a;
    cin >> a;
    int number;
    int arr[a];
    int i = 0;
    while (cin  >> number){
        arr[i]= number;
        i ++;
    }
 
    int result = 1;
    for (int i = 1; i < a ; i++) {
        // cout << arr[i];
        if (arr[i-1] != arr[i]) {
            result++;
        }
    }
 
    cout << result;
 
    return 0;
 
}