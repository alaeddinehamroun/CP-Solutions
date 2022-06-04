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
    
    int k, r, final_price;
    cin >> k >> r;
    final_price = k;
 
 
    while ((final_price % 10 != r)  && (final_price % 10 != 0)){
    
        final_price += k;
    }
    cout << final_price / k;
    return 0;
 
}