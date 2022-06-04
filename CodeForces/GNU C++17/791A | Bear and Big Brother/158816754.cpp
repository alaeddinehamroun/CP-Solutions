#include <bits/stdc++.h>
 
using namespace std;
 
 
void solve(int& a, int& b) {
 
    int i = 0;
 
    while ( a <= b ) {
        a = a * 3;
        // cout << a << endl;
        b = b * 2;
        // cout << b << endl;
        i++;
 
    }
 
    cout << i;
 
}
 
int main() {
    int a;
    int b;
    cin >> a >> b;
    solve(a, b);
    return 0;
}