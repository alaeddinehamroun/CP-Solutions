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
    int w, y;
    string die_roll[6] = {"1/6", "1/3", "1/2", "2/3", "5/6", "1/1"};
    cin >> w >> y;
    w = max(w,y);
    cout << die_roll[6-w];
 
    return 0;
 
}