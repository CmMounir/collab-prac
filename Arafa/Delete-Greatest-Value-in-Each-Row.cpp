class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int result = 0;
         
        vector<priority_queue<int>> m;
        for(const auto& vec : grid) {
            priority_queue<int> myHeap(vec.begin(), vec.end());
            m.push_back(myHeap);    
        }

        while(m[0].size() > 0) {
            int max = INT_MIN;
            for(auto& heap : m) {
                if(max < heap.top()) 
                    max = heap.top();
                heap.pop();
            }
            result += max;
        }

        return result;     
    }
};