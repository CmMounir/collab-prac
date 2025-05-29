class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> myHeap(gifts.begin(),gifts.end());

        for(int i = 0; i < k; i++) {
            int top = myHeap.top(); myHeap.pop();
            myHeap.push(sqrt(top));
        }

        long long result = 0;
        while(!myHeap.empty()) {
            result += myHeap.top(); 
            myHeap.pop();
        }

        return result;
    }
};