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
    int uni[n][2];
    int number;
    int i= 0;
    while (cin >> number && i < n){
        uni[i][0] = number;
        cin >> number;
        uni[i][1] = number;
        i++;
    }
    int result = 0;
    for (int i = 0; i< n ; i++) {
        for(int j = 0; j < n; j++) {
            if(uni[i][0] == uni[j][1])
                result++;
        }
    }
    cout << result;
    return 0;
 
}