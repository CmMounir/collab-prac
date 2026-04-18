1class Solution {
2public:
3    bool isSubsequence(string s, string t) {
4        int i = 0, j = 0;
5
6        while (i < t.size() && j < s.size()) {
7            if (t[i] == s[j]) {
8                j++; // match found
9            }
10            i++; // always move in t
11        }
12
13        return j == s.size();
14    }
15};