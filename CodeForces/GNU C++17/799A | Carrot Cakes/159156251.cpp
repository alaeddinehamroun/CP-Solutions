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
    int n, t, k, d;
    cin >> n >> t >> k >> d;
 
    int time_one_oven = ceil((double)n / k) * t;
 
 
 
    int time = 0;
    while(n>0){
        if( (time > d) && (((time-d)%t) == 0)) {
            n -=k;
        }
        if( (time > 0) && (time % t) == 0) {
            n -=k;
        }
        //cout << time << n << endl;
        time++;
    }
    //cout << time - 1;
    if(time -1 >= time_one_oven)
        cout << "NO";
    else 
        cout << "YES";
    return 0;
 
}
 
 