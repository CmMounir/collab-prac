class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> index_map;  // stores the last seen index of each number
        
        // Iterate over the elements of the nums array
        for (int i = 0; i < nums.size(); i++) {
            // If the number is already in the map and the difference between indices is <= k
            if (index_map.find(nums[i]) != index_map.end() && abs(i - index_map[nums[i]]) <= k) {
                return true;  // found a duplicate within distance k
            }
            
            // Update the last seen index of nums[i]
            index_map[nums[i]] = i;
        }
        
        return false;  // No duplicates found within distance k
    }
};