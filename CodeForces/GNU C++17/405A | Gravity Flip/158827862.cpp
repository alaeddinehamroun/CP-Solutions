#include <bits/stdc++.h>
 
using namespace std;
 
 
 
int main() {
    int n;
    cin >> n;
 
    int arr[n];
    int number;
    int i = 0;
    while (cin >> number) {
        arr[i] = number;
        i++;
    }
 
    //sorting
    sort(arr, arr + n);
 
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}