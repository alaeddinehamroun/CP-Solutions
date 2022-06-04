#include <bits/stdc++.h>
#include <string>
 
using namespace std;
 
 
 
int main() {
    string a;
    cin >> a;
    string tmp;
    int count = 0;
    for (int i = 0; i < a.length(); i++) {
        if (tmp.find(a[i]) == string::npos) {
            tmp += a[i];
            count ++;
        }
    }
 
 
    if (count % 2 == 0)
        cout << "CHAT WITH HER!";
    else
 
        cout << "IGNORE HIM!";
}