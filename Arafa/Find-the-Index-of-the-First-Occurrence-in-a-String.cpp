class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i = 0; i < haystack.length(); i++) {
            int t;
            for(t = 0; t < needle.length(); t++) {
                if(haystack[i+t] != needle[t]) 
                    break;
            }
            if(t == needle.length()) {
                return i;
            }
        }
        return -1;
    }
};