class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxDifference = -1;
        int maxVal = INT_MIN;

        for (int i = nums.size() - 1; i > 0; i--) {
            maxVal = std::max(maxVal, nums.at(i));
            maxDifference = std::max(maxDifference, maxVal - nums.at(i-1));
        }
        if (maxDifference <= 0) {
            return -1;
        }
        return maxDifference;
    }
};