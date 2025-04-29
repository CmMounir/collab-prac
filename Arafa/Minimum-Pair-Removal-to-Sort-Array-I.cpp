class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int counter = 0;

        if (std::is_sorted(nums.begin(), nums.end())) 
            return 0;

        do {
            int min = INT_MAX;
            int index = 0;
            int n = nums.size();
            for(int i = 0; i < n; i++) {
                if(i+1 < n && min > nums[i] + nums[i+1]) {
                    min = nums[i] + nums[i+1];
                    index = i;
                }
            }

            nums[index] = nums[index]+nums[index+1];
            
            nums.erase(nums.begin() + index+1);
            for(int i = 0; i < n; i++) {
                if(i+1 < n && min > nums[i] + nums[i+1]) {
                    min = nums[i] + nums[i+1];
                    index = i;
                }
            }

            counter++;
        }
        while(!std::is_sorted(nums.begin(), nums.end()));
        return counter;
    }
};