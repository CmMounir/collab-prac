class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int res_1 = nums.at(nums.size()-1) * nums.at(nums.size()-2) *nums.at(nums.size()-3);
        int res_2 = nums.at(0) * nums.at(1) *nums.at(nums.size()-1);
        int res_3 = nums.at(0) * nums.at(1) *nums.at(2);
        
        return std::max(std::max(res_1, res_2), res_3);
    }
};