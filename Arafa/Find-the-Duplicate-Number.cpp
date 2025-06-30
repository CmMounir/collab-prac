class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        // for(int i = 0; i < nums.size(); i++) {
        //     for(int t = i+1; t < nums.size(); t++) {
        //         if(nums[i] == nums[t]) return nums[i];
        //     }
        // }
        // return 0;

        sort(nums.begin(), nums.end());
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] == nums[i-1]) return nums[i];
        }
        return 0;
    }
};