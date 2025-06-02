class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> myHeap;

        for(const auto& element : nums) {
            myHeap.push(element);
        }

        while(k > 1) {
            myHeap.pop();
            k--;
        }

        return myHeap.top();
    }
};