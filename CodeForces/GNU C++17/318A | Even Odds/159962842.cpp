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
 
    long long int n, k;
    
    cin >> n >> k;
    
    long long int n_odd = n / 2;
    
    if (n % 2 != 0)
        n_odd ++;
 
    
    if ( k <= n_odd) {
        cout << k * 2 - 1;
    } else {
        cout << (k - n_odd) * 2;
    }
 
    return 0;
}
 