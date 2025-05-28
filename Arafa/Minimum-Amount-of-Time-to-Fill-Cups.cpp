class Solution {
public:
    int fillCups(vector<int>& amount) {
        priority_queue<int> myHeap;

        for(const auto& element : amount) {
            if(element != 0) {
                myHeap.push(element);
            }
        }
        int result = 0;
        while(!myHeap.empty()) {
            if(myHeap.size() > 1) {
                int x = myHeap.top(); myHeap.pop();
                int y = myHeap.top(); myHeap.pop();
                x--;
                y--;
                if(x!=0) myHeap.push(x);
                if(y!=0) myHeap.push(y);
            }
            else {
                int x = myHeap.top(); myHeap.pop();
                x--;
                if(x!=0) myHeap.push(x);
            }
            result++;
        }
        return result;
    }
};