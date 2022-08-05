#include <iostream>
#include <string>

class Solution {
public:
    int minimumSum(int num) {
        string num_str = to_string(num);
        sort(num_str.begin(), num_str.end());
        return stoi(string(1, num_str[0])+num_str[3])+stoi(string(1, num_str[1])+num_str[2]);
    }
};