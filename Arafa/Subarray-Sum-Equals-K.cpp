1class Solution {
2public:
3    int subarraySum(vector<int>& nums, int k) {
4        int res = 0;
5        vector<int> prefix(nums.size());
6
7        int sum = 0;
8        for(int i = 0; i < nums.size(); i++) {
9            sum += nums[i];
10            prefix[i] = sum;
11        }
12
13        for(int i = 0; i < nums.size(); i++) {
14            for(int j = i; j < nums.size(); j++) {
15                if(prefix[j]-prefix[i]+nums[i] == k) {
16                    res++;
17                }
18            }
19        }
20
21        return res;
22    }
23};