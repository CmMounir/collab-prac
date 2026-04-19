1class Solution {
2public:
3    int longestPalindrome(string s) {
4        int counter = 0;
5
6        map<char, int> myMap;
7
8        for(const auto& c : s) {
9            myMap[c]++;
10        }
11
12        bool flag = false;
13        
14        for(const auto& pair: myMap) {
15            if(pair.second %2 == 0) {
16                counter += pair.second;
17            }
18            else {
19                counter += pair.second-1;
20                flag = true;
21            }
22        }
23
24        if(flag)
25            return counter+1;
26        else
27            return counter;
28    }
29};