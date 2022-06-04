#include <bits/stdc++.h>
 
using namespace std;
 
 
void solve(int a, int b, vector<int> t) {
 
    int result = 0;
    for (int i = 0; i < a; i++) {
        if (t[i] > b)
            result++;
        result++;
    }
    cout << result;
 
}
 
int main() {
    int a, b;
    cin >> a >> b;
    vector<int> t;
    int number;
    while (cin >> number) {
        t.push_back(number) ;
    }
    solve(a, b, t);
    return 0;
}