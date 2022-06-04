/********   All Required Header Files ********/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int number;
    int arr1 [n], arr2[n], arr3[n];
    int i_1 = 0, i_2 = 0, i_3 = 0;
    for (int i = 0; i < n; i++) {
        cin >> number;
        if (number == 1) {
            arr1[i_1] = i+1;
            i_1 ++;
        }
        else if (number  == 2) {
            arr2[i_2] = i+1;
            i_2 ++;
 
        }
        else {
            arr3[i_3] = i+1;
            i_3 ++;
 
        }
    }
    // cout << i_1 << i_2 << i_3 << endl;
    int res = i_2;
    if (res > i_1)
        res = i_1;
    if (res > i_3 )
        res = i_3;
    cout << res << endl;
 
    for ( int i = 0; i < res; i++) {
        cout << arr1[i] << " " << arr2[i] << " " << arr3[i] << endl;
    }
    return 0;
 
}
 
 