class Solution {
public:
    struct Compare {
        bool operator()(const pair<int, string>& a, const pair<int, string>& b) const {
            if (a.first == b.first)
                return a.second > b.second; 
            return a.first < b.first; 
        }
    };

    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> freqMap;
        for (const string& word : words) {
            freqMap[word]++;
        }

        priority_queue<pair<int, string>, vector<pair<int, string>>, Compare> maxHeap;
        for (const auto& entry : freqMap) {
            maxHeap.push({entry.second, entry.first});
        }

        vector<string> result;
        for (int i = 0; i < k; ++i) {
            result.push_back(maxHeap.top().second);
            maxHeap.pop();
        }

        return result;
    }
};
