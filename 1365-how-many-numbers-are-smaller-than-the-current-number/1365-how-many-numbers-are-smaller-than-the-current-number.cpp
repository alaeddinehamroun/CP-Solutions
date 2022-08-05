class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> sorted_nums = nums;
        vector<int> res;
        sort(sorted_nums.begin(), sorted_nums.end());
        for (auto n: nums){
            long unsigned int i = 0;
            while( i < sorted_nums.size() && n > sorted_nums[i])
                i++;
            res.push_back(i);
        }
        return res;
        
    }
};