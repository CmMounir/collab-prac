1class Solution {
2public:
3    bool isIsomorphic(string s, string t) {
4        if(s.length() != t.length()) {
5            return false;
6        }
7
8        map<char, char> myMap;
9        set<char> mySet;
10
11        for(int i = 0; i < s.length(); i++) {
12            if(myMap.find(s[i]) == myMap.end()) {
13                if(mySet.find(t[i]) == mySet.end()) {
14                    myMap[s[i]] = t[i];
15                    mySet.insert(t[i]);
16                }
17                else {
18                    return false;
19                }
20            }
21            else {
22                if(myMap[s[i]] == t[i]) {
23               
24                }
25                else {
26                    return false;
27                }
28            }
29        }
30
31        return true;
32    }
33};