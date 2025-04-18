class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map <int, int> mapping;

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums.at(i);
        if (mapping.find(complement) != mapping.end()) {
            return { mapping.at(complement), i };
        }

        mapping[nums.at(i)] = i;

    }

    return {};
}
};