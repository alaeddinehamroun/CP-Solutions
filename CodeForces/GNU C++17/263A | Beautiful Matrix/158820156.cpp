#include <bits/stdc++.h>
 
using namespace std;
 
 
 
 
int main() {
    int matrix[5][5];
    int i_1;
    int j_1;
    for ( int j = 0; j < 5; j++ ) {
 
        for (int i = 0; i < 5; i++) {
            cin >> matrix[j][i];
            if (matrix[j][i] == 1) {
                i_1 = i;
                j_1 = j;
 
            }
        }
    }
 
    int result = 0;
    if (j_1  == 4 || j_1 == 0) {
        result += 2;
    }
    else if (j_1  == 3 || j_1 == 1) {
        result += 1;
    }
 
    if (i_1  == 4 || i_1 == 0) {
        result += 2;
    }
    else if (i_1  == 3 || i_1 == 1) {
        result += 1;
    }
 
    cout << result;
    return 0;
}