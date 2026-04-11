1class Solution {
2public:
3    vector<int> topKFrequent(vector<int>& nums, int k) {
4        vector<int> res(k);
5
6        map<int, int> elementToCountMap;
7        priority_queue<pair<int, int>> pq;
8
9        for(const auto& element : nums) {
10            elementToCountMap[element]++;
11        }
12
13        for(const auto& element: elementToCountMap) {
14            pq.push({element.second, element.first});
15        }
16
17        for(int i = 0; i < k; i++) {
18            res[i] = pq.top().second;
19            pq.pop();
20        }
21
22        return res;
23    }
24};