class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0;
        while(left < nums.size()) {
            if(nums[left] != 0) {
                left++;
                continue;
            }
            else {
                int right = left+1;
                while(right < nums.size() && nums[right]==0) {right++;}
                if(right == nums.size()) {
                    break;
                }
                else {
                    nums[left] = nums[right];
                    nums[right] = 0;
                    left++;
                }
            }
        }
    }
};