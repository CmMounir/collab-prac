class Solution {
public:
    string frequencySort(string s) {
        map<char, int> myMap;

        for(const auto& character: s) {
            myMap[character]++;
        }

        priority_queue<pair<int, char>> myHeap;

        for(const auto& pair: myMap) {
            myHeap.push({pair.second, pair.first});
        }

        string result = \\;
        
        while(!myHeap.empty()) {
            int times = myHeap.top().first;
            while(times > 0) {
                result+= myHeap.top().second;
                times--;
            }
            myHeap.pop();
        }

        return result;
    }
};