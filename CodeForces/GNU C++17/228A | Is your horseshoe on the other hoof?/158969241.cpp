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
 
    int arr[4];
    int i = 1;
    int dcs = 1;
    cin >> arr[0];
    while (cin >> arr[i]) {
        int j = 0;
        while ( j < i) {
            if (arr[i] == arr[j])
                break;
 
            j++;
        }
        if ( i == j) {
            dcs ++;
        }
        i++;
 
    }
    cout << 4 - dcs;
 
    return 0;
 
}