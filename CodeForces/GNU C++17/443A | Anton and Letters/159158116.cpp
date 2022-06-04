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
    string ch;
    getline(std::cin, ch);
    string s = "";
    for (int i = 0; i < ch.length(); i++) {
        if (!(ch[i] == '{' || ch[i] == '}' || ch[i] == ',' || ch[i] == ' '))
            s += ch[i];
 
    }
    std::set<char> seen;
    s.erase(std::remove_if(s.begin(), s.end(), [&seen](char c) { return !seen.insert(c).second; }), s.end());
    cout << s.length();
    return 0;
 
}
 
 