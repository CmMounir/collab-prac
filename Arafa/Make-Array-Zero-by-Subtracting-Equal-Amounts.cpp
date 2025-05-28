class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int result = 0;
        int min = 0;
        while(min != INT_MAX){
            min = INT_MAX;
            bool flag = false;
            for(int i = 0; i < nums.size(); i++) {
                if(nums[i] > 0 && min > nums[i]) {
                    min = nums[i];
                    flag = true;
                }
            }

            if(flag) {
                result++;
                for(int i = 0; i < nums.size(); i++) {
                    nums[i] -= min;
                }
            }
        }
        return result;
    }
};