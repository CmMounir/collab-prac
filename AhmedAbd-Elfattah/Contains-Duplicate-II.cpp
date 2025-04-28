class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
    int window_size = std::min(k + 1, static_cast<int>(nums.size()));

    std::set<int> window;
    for (int i = 0; i < window_size; i++) {
        window.insert(nums.at(i));
    }

    if (window.size() != window_size) {
        return true;
    }

    for (int i = 0; i < (nums.size()- window_size); i++) {
        window.erase(nums.at(i));
        window.insert(nums.at(i+ window_size));
        if (window.size() != window_size) {
            return true;
        }
    }

    return false;
}
};