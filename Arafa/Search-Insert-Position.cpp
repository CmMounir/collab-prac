class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int result;
        for(int i =0; i < nums.size(); i++) {
            if(nums[i] >= target)  {
                result = i;
                break;
            }
        }
        return result;
    }
};