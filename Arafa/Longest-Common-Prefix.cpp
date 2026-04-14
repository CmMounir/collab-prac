1class Solution {
2public:
3    string longestCommonPrefix(vector<string>& strs) {
4        string res = "";
5
6        int min = INT_MAX;
7        for(const auto& str : strs) {
8            if(min > str.length()) {
9                min = str.length();
10            }
11        }
12
13        for(int i = 0; i < min; i++) {
14            bool flag = true;
15            for(auto& str : strs) {
16                if(strs[0][i] != str[i]) {
17                    flag = false;
18                    break;
19                }
20            }
21            if(flag == true) {
22                res += strs[0][i];
23            }
24            else {
25                break;
26            }
27        }
28
29        return res;
30    }
31};