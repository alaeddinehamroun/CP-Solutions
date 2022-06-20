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
    for (int i = 0; i < n ; i++) {
        cin >> arr[i];
    }
 
    int min , max;
 
    cout << arr[1] - arr[0] << " " << arr[n - 1] - arr[0] << endl;
    for (int i = 1; i < n - 1 ; i++) {
        min = arr[i] - arr[i - 1];
        max = arr[n - 1] - arr[i];
        if (min > arr[i + 1] - arr[i])
            min = arr[i + 1] - arr[i];
        if ( arr[i] - arr[0] > max)
            max = arr[i] - arr[0];
 
        cout << min << " " << max << endl;
 
    }
 
    cout << arr[n - 1] - arr[n - 2] << " " << arr[n - 1] - arr[0] << endl;
 
    return 0;
}
 