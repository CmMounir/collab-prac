class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> myMap;
        int left = 0;
        int right = 0;
        int max = 0;
        while(right < s.size()) {
            if(myMap[s[right]] == 0) {
                myMap[s[right]]++;
                right++;

                if(max < (right-left)) 
                    max = (right-left);
            }
            else {
                if(max < (right-left)) 
                    max = (right-left);
                myMap[s[right]]++;
                while(left < right && myMap[s[right]] > 1) {
                    myMap[s[left]]--;
                    left++;
                }
                myMap[s[right]]--;
            }
        }
        return max;
    }
};