class Solution {
public:
    int firstUniqChar(string s) {
        int freq[26] = {0};
        // Find the frequency
        for (char c : s)
            freq[c - 'a']++;

        // look for first occurance of uniqe
        for (size_t i = 0; i < s.size(); ++i)
            if (freq[s[i] - 'a'] == 1)
                return i;

        return -1;
    }
};