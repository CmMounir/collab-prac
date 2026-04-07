1class Solution {
2public:
3    // vector<int> twoSum(vector<int>& nums, int target) {
4    //     vector<int> res;
5    //     for(int i = 0; i < nums.size()-1; i++)
6    //     {
7    //         for(int j = i+1; j < nums.size(); j++)
8    //         {
9    //             if(nums[i] + nums[j] == target)
10    //             {
11    //                 return {i,j};
12    //             }
13    //         }
14    //     }
15    //     return res;
16    // }
17
18    vector<int> twoSum(vector<int> &nums, int target) {
19        unordered_map<int, int> hash;
20        for (int i = 0; i < nums.size(); ++i) {
21            int complement = target - nums[i];
22            if (hash.find(complement) != hash.end()) {
23                return {hash[complement], i};
24            }
25            hash[nums[i]] = i;
26        }
27        // Return an empty vector if no solution is found
28        return {};
29    }
30};