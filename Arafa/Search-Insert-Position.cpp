1class Solution {
2public:
3    int searchInsert(vector<int>& nums, int target) {
4        int left = 0;
5        int right = nums.size()-1;
6        int mid = 0;
7
8        while(left <= right) {
9            mid = (left+right)/2;
10
11            if(nums[mid] == target) {
12                return mid;
13            }
14            else if(nums[mid] > target) {
15                right = mid-1;
16            }
17            else {
18                left = mid+1;
19            }
20        }   
21
22        if(nums[mid] < target) 
23            return mid+1;
24        else
25            return mid;
26    }
27};