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
 
    string a, b;
    cin >> a >> b;
    if ( a == b)
        cout << -1;
    else
        cout << max(a.length(), b.length());
 
 
 
    return 0;
}
 