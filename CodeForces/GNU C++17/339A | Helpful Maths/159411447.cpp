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
 
    string s;
    cin >> s;
    int r[s.length()];
    int j = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '+') {
            r[j] = s[i] - 48;
            //cout << r[j] << endl;
            j++;
        }
    }
    sort(r, r + j);
    string res = to_string(r[0]);
 
    for (int i = 1; i < j; i++) {
 
        res += "+" + to_string(r[i]);
 
    }
    cout << res;
    return 0;
 
}
 
 