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
    int n , m;
    cin >> n;
    int arr[n];
 
    int i = 0;
    while ( i < n) {
        cin >> arr[i];
        i++;
    }
    cin >> m;
 
    int xi, yi;
    while (cin >> xi) {
        cin >> yi;
        // cout << xi << yi <<endl;
 
 
        if (xi < n)
            arr[xi] += (arr[xi - 1] - yi);
 
        if (xi > 0)
            arr[xi - 2] += yi - 1;
        arr[xi - 1] = 0;
 
    }
 
 
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    return 0;
 
}
 
 