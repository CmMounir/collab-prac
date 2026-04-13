1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4        map<int, int> myMap;
5
6        for(const auto& element: nums) {
7            myMap[element]++;
8        }
9
10        return !(myMap.size() == nums.size());
11    }
12};