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
    int result = 0;
    int number;
    int i = 0;
    int nb_polices = 0;
    while (cin >> number) {
        if (number > 0) {
            nb_polices += number;
        }
        else {
            if (nb_polices == 0) {
                result++;
            }
            else {
                nb_polices --;
            }
        }
 
        i++;
    }
    cout << result;
    return 0;
 
}