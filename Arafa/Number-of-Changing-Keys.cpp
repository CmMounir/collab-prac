1class Solution {
2public:
3    int countKeyChanges(string s) {
4        int counter = 0;
5
6        for(int i = 1; i < s.length(); i++) {
7            if(tolower(s[i]) != tolower(s[i-1])) {
8                counter++;
9            }
10        }
11
12        return counter;
13    }
14};