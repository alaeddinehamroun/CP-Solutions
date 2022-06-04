#include <iostream>
#include <cctype>
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
 
 
    int res1 = 0, res2 = 0;
    int debut = 0, fin = n - 1;
    // int a = sizeof(arr) / sizeof(arr[0]);
    // sort(arr, arr + a, greater<int>());
    bool tour = true;
    while (debut <= fin) {
        if (arr[debut] < arr[fin]) {
            switch (tour) {
            case true:
                tour = false;
                res1 += arr[fin];
                break;
            case false:
                tour = true;
                res2 += arr[fin];
                break;
 
            }
            fin --;
        }
        else {
            switch (tour) {
            case true:
                tour = false;
                res1 += arr[debut];
                break;
            case false:
                tour = true;
                res2 += arr[debut];
                break;
 
            }
            debut ++;
 
        }
    }
 
    cout << res1 << ' ' << res2;
    return 0;
 
}