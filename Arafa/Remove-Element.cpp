1class Solution {
2public:
3    int removeElement(vector<int>& nums, int val) {
4        vector<int> vec;
5        for(auto& element : nums) {
6            if(element != val)
7                vec.push_back(element);
8        }
9        
10        int counter = 0;
11        for(auto& element : vec) {
12            nums[counter++] = element;
13        }
14
15
16        return counter;
17    }
18};