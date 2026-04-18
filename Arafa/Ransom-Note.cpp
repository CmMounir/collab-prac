1class Solution {
2public:
3    bool canConstruct(string ransomNote, string magazine) {
4        // frequency map
5        map<char, int> myMap;
6
7        for(const auto& c : magazine) {
8            myMap[c]++;
9        }
10
11        for(const auto& c: ransomNote) {
12            if(myMap.find(c) == myMap.end()) {
13                return false;
14            }
15            else {
16                if(myMap[c] == 0)
17                    return false;
18                else 
19                    myMap[c]--;
20            }
21        }
22
23        return true;
24    }
25};