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
 
    string ch;
    while (cin >> ch) {
        if (ch.length() > 10) {
            cout << ch[0] << ch.length() - 2 << ch[ch.length() - 1]<<endl;
        }
        else {
            cout << ch << endl;
 
        }
    }
    return 0;
 
}
 
 