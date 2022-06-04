#include <bits/stdc++.h>
 
using namespace std;
 
 
void solve(int a, string b) {
 
    int aa = 0;
    int dd = 0;
    for (int i = 0; i<a; i++){
        if (b[i] == 'A')
            aa++;
        if (b[i] == 'D')
            dd++;
 
    }
    if (aa>dd)
        cout << "Anton";
    else if (aa < dd)
        cout << "Danik";
    else cout << "Friendship";
 
}
 
int main() {
    int a;
    cin >> a;
 
    string games;
    cin >> games;
    
    solve(a, games);
    return 0;
}