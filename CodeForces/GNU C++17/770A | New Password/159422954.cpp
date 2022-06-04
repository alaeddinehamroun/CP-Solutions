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
 
    string s = "abcdefghijklmnopqrstuvwxyz";
    string s2 = "";
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        s2 += s[i % k];
    }
 
    cout << s2 << endl;
 
 
 
 
 
 
    return 0;
}
 