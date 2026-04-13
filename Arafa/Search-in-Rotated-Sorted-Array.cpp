1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int left = 0;
5        int right = nums.size() - 1;
6        int mid;
7
8        while (left <= right) {
9            mid = (left + right) / 2;
10
11            if (nums[mid] == target)
12                return mid;
13
14            // Right half is sorted
15            if (nums[mid] <= nums[right]) {
16                if (target > nums[mid] && target <= nums[right])
17                    left = mid + 1;
18                else
19                    right = mid - 1;
20            }
21            // Left half is sorted
22            else {
23                if (target < nums[mid] && target >= nums[left])
24                    right = mid - 1;
25                else
26                    left = mid + 1;
27            }
28        }
29
30        return -1;
31    }
32};