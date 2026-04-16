1class Solution {
2public:
3    int lengthOfLastWord(string s) {
4        int res = 0;
5        bool flag = false;
6
7        for(int i = s.length()-1; i > -1; i--) {
8            if(s[i] == ' ') {
9               if(res > 0) break;
10            }
11            else {
12                res++;
13            }
14        }
15
16        return res;
17    }
18};