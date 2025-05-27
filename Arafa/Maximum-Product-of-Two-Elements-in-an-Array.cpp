class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int> myHeap(nums.begin(), nums.end());
        int x = myHeap.top(); myHeap.pop();
        int y = myHeap.top(); myHeap.pop();
        return (x-1)*(y-1);
    }
};