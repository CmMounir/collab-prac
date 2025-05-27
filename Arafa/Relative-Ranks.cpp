class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> result;

        priority_queue<int> myHeap(score.begin(), score.end());
        map<int, int> myMap;
        
        int counter = 1;
       
        while(!myHeap.empty()) {
            myMap[myHeap.top()] = counter;
            counter++;
            myHeap.pop();
        }

        for(const auto& element : score) {
            if(myMap[element] == 1)      result.push_back(\Gold Medal\);
            else if(myMap[element] == 2) result.push_back(\Silver Medal\);
            else if(myMap[element] == 3) result.push_back(\Bronze Medal\);
            else                         result.push_back(to_string(myMap[element]));
        }
        return result;
    }
};