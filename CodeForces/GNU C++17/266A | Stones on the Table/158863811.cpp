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
    string list;
    cin >> list;
 
    int i;
    int res = 0;
    for (int j = 0; j < n; j++) {
        i = j;
        while (i < n && list[i+1]==list[j] ) {
            res++;
            i++;
        }
        j = i;
    }
    
    cout << res;
 
    return 0;
 
}