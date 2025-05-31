class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        
        priority_queue<int> myHeap;
        map<int, int> myMap;

        for(const auto& element: nums) {
            myHeap.push(element);
        }

        int kk = k;
        while(!myHeap.empty() && kk > 0) {
            myMap[myHeap.top()]++;
            myHeap.pop();
            kk--;
        }

        vector<int> result;

        for(const auto& element: nums) {
            if(myMap[element] != 0)  { 
                myMap[element]--;
                result.push_back(element);
                k--;
                if(k == 0) break;
            }
        }

        return result;
    }
};