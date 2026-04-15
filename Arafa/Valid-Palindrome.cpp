1class Solution {
2public:
3    bool isPalindrome(string s) {
4        bool res = true;
5
6        int left = 0;
7        int right = s.length();
8
9        while(left < right) {
10            if(!isalnum(s[left])) {
11                left++;
12                continue;
13            }
14
15            if(!isalnum(s[right])) {
16                right--;
17                continue;
18            }
19
20            if (tolower(s[left]) != tolower(s[right])) {
21                res = false;
22                break;
23            }
24            left++;
25            right--;
26        }
27
28        return res;
29    }
30};