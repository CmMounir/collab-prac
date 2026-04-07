1class Solution {
2public:
3    // bool isAnagram(string s, string t) {
4    //     bool res = false;
5    //     sort(s.begin(), s.end());
6    //     sort(t.begin(), t.end());
7    //     if(s == t)
8    //         res = true;
9    //     else 
10    //         res = false;
11    //     return res;
12    // }
13
14    bool isAnagram(string s, string t) {
15        bool res = true;
16        int n_s = s.length();
17        int n_t = t.length();
18        if(n_s != n_t)
19            res = false;
20        else {
21            map<char, int> s_myMap;
22            for(const auto& character : s)
23            {
24                s_myMap[character]++;
25            }
26            map<char, int> t_myMap;
27            for(const auto& character : t)
28            {
29                t_myMap[character]++;
30            }
31            for(const auto& pair : s_myMap)
32            {
33                if(t_myMap[pair.first] != pair.second) {
34                    res = false;
35                    break;
36                }
37            }
38        }
39        return res;
40    }
41};