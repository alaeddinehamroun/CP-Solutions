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
 
    string t, s;
    cin >> s >> t;
    int i_position = 0;
    for (int i = 0; i < t.length(); i++) {
        if( t[i] == s[i_position]){
            i_position ++;
        }
    }
    cout << i_position + 1;
 
    return 0;
 
}