1class Solution {
2public:
3    int firstUniqChar(string s) {
4        int res = -1;
5        map<char, int> myMap;
6        map<char, bool> mySecondMap;
7
8        for(const auto& c : s) {
9            myMap[c]++;
10        }
11
12        for(const auto& pair : myMap) {
13            if(pair.second == 1) {
14                mySecondMap[pair.first] = true;
15            }
16        }
17
18        for(int i = 0; i < s.length(); i++) {
19            if(mySecondMap[s[i]]) {
20                res = i;
21                break;
22            }
23        }
24
25        return res;
26    }
27};