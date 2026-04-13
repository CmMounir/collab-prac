1class Solution {
2public:
3    // int removeElement(vector<int>& nums, int val) {
4    //     vector<int> vec;
5    //     for(auto& element : nums) {
6    //         if(element != val)
7    //             vec.push_back(element);
8    //     }
9        
10    //     int counter = 0;
11    //     for(auto& element : vec) {
12    //         nums[counter++] = element;
13    //     }
14
15
16    //     return counter;
17    // }
18
19    int removeElement(vector<int>& nums, int val) {
20        if(nums.size() == 0)    return 0;
21        
22        int lastGoodPosition;
23
24        for(int i =0; i<nums.size(); i++) {
25            if(i == 0) {
26                if(nums[0] == val) {
27                    lastGoodPosition = -1;
28                }
29                else {
30                    lastGoodPosition = 0;
31                }
32            }
33            else {
34                if(nums[i] == val) {
35
36                }
37                else {
38                    nums[lastGoodPosition+1] = nums[i];
39                    lastGoodPosition++;
40                }
41            }
42        }
43
44        return lastGoodPosition+1;
45    }
46};