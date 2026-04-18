1class Solution {
2public:
3    char findTheDifference(string s, string t) {
4        char res = ' ';
5
6        map<char, int> myMap_s;
7
8        for(const auto& c : s) {
9            myMap_s[c]++;
10        }
11
12        map<char, int> myMap_t;
13
14        for(const auto& c : t) {
15            myMap_t[c]++;
16        }
17
18        for(const auto& c : t) {
19            if(myMap_t[c] != myMap_s[c]) {
20                res = c;
21                break;
22            }
23        }
24
25        return res;
26    }
27};