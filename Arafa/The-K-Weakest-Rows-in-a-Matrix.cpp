class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        map<int, priority_queue<int, vector<int>, greater<int>>> myMap;
        priority_queue<int, vector<int>, greater<int>> myHeap;
        for(int i = 0; i < mat.size(); i++) {
            int counter = 0;
            for(const auto& element : mat[i]) {
                if(element ==1) counter++;
            }
            myMap[counter].push(i);
            myHeap.push(counter);
        }

        vector<int> result;
        while(k > 0) {
            while(!myMap[myHeap.top()].empty() && k > 0) {
                result.push_back(myMap[myHeap.top()].top());
                myMap[myHeap.top()].pop();
                k--;
            }
            myHeap.pop();
        }
        return result;
    }
};