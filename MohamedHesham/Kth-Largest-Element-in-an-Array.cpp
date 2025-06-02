class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // Min-heap: smallest element on top
        std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;

        for (int num : nums) {
            minHeap.push(num);
            if (minHeap.size() > k) {
                minHeap.pop(); // Remove the smallest element
            }
        }

        return minHeap.top(); // kth largest element
    }
};