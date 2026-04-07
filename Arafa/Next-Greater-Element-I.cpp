1class Solution {
2public:
3    int getNextAfterIndex(int index, vector<int>& nums)
4    {
5        int res = -1;
6        for(int i =index+1; i < nums.size(); i++)
7        {
8            if(nums[i] > nums[index]) {
9                res = nums[i];
10                break;
11            }
12        }
13        return res;
14    }
15    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
16        vector<int> res(nums1.size());
17        map<int, int> myMap;
18
19        for(int i = 0; i < nums2.size(); i++)
20        {
21            myMap[nums2[i]] = getNextAfterIndex(i, nums2);
22        }
23
24        for(int i = 0; i < nums1.size(); i++)
25        {
26            res[i] = myMap[nums1[i]];
27        }
28
29        return res;
30    }
31};