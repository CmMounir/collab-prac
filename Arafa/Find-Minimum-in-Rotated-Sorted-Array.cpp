1class Solution {
2public:
3    int findMin(vector<int>& nums) {
4        int left = 0, right = nums.size() - 1;
5
6        while(left < right) {
7            int mid = (right + left) / 2;
8            if(nums[mid] < nums[right]) {
9                right = mid;
10            } else {
11                left = mid + 1;
12            }
13        }
14
15        return nums[left];
16    }
17};