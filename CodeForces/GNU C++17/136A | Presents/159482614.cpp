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
    int arr[n];
    for (int i = 0; i< n; i++) {
        cin >> arr[i];
        //cout << arr[i] << "->"<< i+1<< endl;
    }
    for (int i = 1; i< n+1 ; i++) {
        for(int j = 0; j<n; j++) {
            if(arr[j] == i){
                cout << j+1<<" ";
            }
        }
    }
 
    return 0;
}
 