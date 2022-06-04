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
    long long int x;
    cin >> n >> x;
    int d = 0;
    for (int i = 0; i<n; i++) {
        char ch;
        long long int s;
        cin >> ch >> s;
        // cout << ch <<" "<< s<<" "<<x<<endl;
        if(ch == '+') {
            x += s;
        }
        else {
            if( s<=x){
                x -=s;
            }
            else{
                d ++;
            }
        }
    }
    cout << x << " " << d;
 
    return 0;
 
}
 
 