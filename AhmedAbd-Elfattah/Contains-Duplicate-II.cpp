class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
    int window_size = std::min(k + 1, static_cast<int>(nums.size()));

    std::set<int> seen_in_window;
    for (int i = 0; i < window_size; i++) {
        seen_in_window.insert(nums.at(i));
    }

    if (seen_in_window.size() != window_size) {
        return true;
    }

    for (int i = 0; i < (nums.size()- window_size); i++) {
        seen_in_window.erase(nums.at(i));
        seen_in_window.insert(nums.at(i+ window_size));
        if (seen_in_window.size() != window_size) {
            return true;
        }
    }

    return false;
}
};