class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if (nums.size() <= 1) {
            return;
        }
        if (nums.size() == 2) {
            if (nums.at(0) < nums.at(1)) {
                std::swap(nums.at(0), nums.at(1));
            }
            return;
        }

        for (size_t i = 0; i < nums.size(); i++) {
            if (nums.at(i) == 0) {
                size_t idx = i+1;
                for (; idx < nums.size(); idx++) {
                    if (nums.at(idx) != 0) {
                        std::swap(nums.at(idx), nums.at(i));
                        break;
                    }
                }
            }
        }

    }
};