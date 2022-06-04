#include <bits/stdc++.h>
#include <string>
 
using namespace std;
 
 
 
int main() {
    string a, b;
    cin >> a;
 
    cin >> b;
    string aUpp, bUpp;
    for ( int i = 0; i < a.length(); i++) {
        aUpp += toupper(a[i]);
        bUpp += toupper(b[i]);
    }
 
 
    if (aUpp < bUpp)
        cout << "-1";
    else if (aUpp > bUpp)
        cout << "1";
    else cout << "0";
 
}