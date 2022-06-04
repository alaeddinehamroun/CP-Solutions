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
    int n, b, d;
    cin >> n >> b >> d;
    int number, result = 0, total = 0;
    for (int i = 0; i <n ; i++){
        cin >> number;
        if ( number <= b) {
            total += number;
            if (total > d) {
                result ++;
                total = 0;
            }
 
        };
    }
 
  
    cout << result;
    return 0;
 
}
 
 