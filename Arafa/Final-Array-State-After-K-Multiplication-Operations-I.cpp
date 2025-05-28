class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for(int i = 0; i < k; i++) {
            auto itr = min_element(nums.begin(), nums.end());
            *itr = *itr*multiplier; 
        }
        return nums;
    }
};