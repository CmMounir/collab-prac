1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        if(nums.size() == 0)
5            return 0;
6
7        int res = 0;
8
9        
10        int previous;
11        int lastGoodPosition = 0;
12        /*
13            1 2 2 3 
14
15            1 1 2
16        */
17        for(int i = 0; i < nums.size(); i++) {
18            if(i == 0) {
19                lastGoodPosition = 0;
20            }
21            else {
22                if(nums[i] == previous) // duplicate
23                {
24
25                }
26                else {
27                    nums[lastGoodPosition+1] = nums[i];
28                    lastGoodPosition++;
29                }
30            }
31            previous = nums[i];
32        }
33
34        return lastGoodPosition+1;
35    }
36};