1class Solution {
2public:
3    void reverseString(vector<char>& s) {
4        int left = 0;
5        int right = s.size() - 1;
6
7        while(left < right) {
8            char temp = s[left];
9            s[left] = s[right];
10            s[right] = temp;
11            left++;
12            right--;
13        }
14    }
15};