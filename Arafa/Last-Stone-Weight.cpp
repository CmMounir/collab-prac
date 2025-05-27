class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> myHeap(stones.begin(), stones.end());
        while(myHeap.size() > 1) {
            int x = myHeap.top(); myHeap.pop();
            int y = myHeap.top(); myHeap.pop();
            if(x > y) { myHeap.push(x-y);}
            else if(x < y) { myHeap.push(x-y);}
        }
        return (myHeap.size()==1) ? myHeap.top():0;
    }
};