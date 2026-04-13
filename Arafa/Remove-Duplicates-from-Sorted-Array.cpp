1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        int previous;
5        int lastGoodPosition = 0;
6
7        for(int i = 0; i < nums.size(); i++) {
8            if(i == 0) {
9                lastGoodPosition = 0;
10            }
11            else {
12                if(nums[i] == previous) // duplicate
13                {
14
15                }
16                else {
17                    nums[lastGoodPosition+1] = nums[i];
18                    lastGoodPosition++;
19                }
20            }
21            previous = nums[i];
22        }
23
24        return lastGoodPosition+1;
25    }
26};