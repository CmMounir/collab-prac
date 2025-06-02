#include <deque>
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) 
    {
        std::sort(nums.begin(),nums.end());
        return nums.at(nums.size()-k);
    }
};