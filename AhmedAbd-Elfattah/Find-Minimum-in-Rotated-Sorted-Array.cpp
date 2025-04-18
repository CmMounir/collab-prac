class Solution {
public:
    int findMin(vector<int>& nums) {
        auto min_it = std::min_element(nums.begin(), nums.end());
        int min_index = std::distance(nums.begin(), min_it);
        if (min_index == 0) {
            return *nums.begin();
        }

        return nums.at(min_index);
    }
};