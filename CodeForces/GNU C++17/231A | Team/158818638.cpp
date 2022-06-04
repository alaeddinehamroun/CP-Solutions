#include <bits/stdc++.h>
 
using namespace std;
 
 
 
 
int main() {
    int a;
    cin >> a;
 
 
    int result = 0;
    for ( int j = 0; j < a; j++) {
        int number;
        int s = 0;
        for (int i = 0; i < 3; i++) {
            cin >> number;
            s += number;
        }
        if ( s >= 2)
            result ++;
 
 
    }
 
    cout << result;
    return 0;
}