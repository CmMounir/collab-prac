class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int summation = (nums.size() * (nums.size() + 1)) / 2;
        for (auto i : nums){
            summation -= i;
        }
        return summation ;
    }
};