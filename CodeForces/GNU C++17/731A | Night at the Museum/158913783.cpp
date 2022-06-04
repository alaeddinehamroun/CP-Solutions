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
    
    string s;
    cin >> s;
    int pointer = 97;
    int result = 0;
    for (int i = 0; i <s.length(); i++){
        // char *ch ;
        // sprintf(ch ,"%c", 97);
        // cout << ch;
 
        int ascii = int(s[i]);
        if (abs(ascii - pointer) > 13){
            result+= 26 - abs(ascii - pointer);
        }
        else{
            result+= abs(ascii - pointer);
        }
        pointer = ascii;
    }
    cout << result;
    return 0;
 
}