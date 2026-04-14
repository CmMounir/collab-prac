1class Solution {
2public:
3    int strStr(string haystack, string needle) {
4        if(haystack.length() < needle.length())
5            return -1;
6        
7        if(haystack.length() == needle.length() && haystack == needle)
8            return 0;
9
10        int res = -1;
11        for(int i = 0; i <= haystack.length()-needle.length(); i++) {
12            bool flag = true;
13            for(int j =0; j < needle.length(); j++) {
14                if(haystack[i+j] != needle[j]) {
15                    flag = false;
16                    break;
17                }
18            }
19            if(flag == true) {
20                res = i;
21                break;
22            }
23        }
24        return res;
25    }
26};