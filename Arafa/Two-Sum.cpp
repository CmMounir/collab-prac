class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for(int i = 0; i < nums.size(); i++) {
            for(int t = i+1; t < nums.size(); t++) {
                if(nums[i]+nums[t] == target) {
                    result.push_back(i);
                    result.push_back(t);
                    return result;
                }
            }
        }
        return result;
    }
};