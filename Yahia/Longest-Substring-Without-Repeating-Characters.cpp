#include <vector>
#include <algorithm>
class Solution {
public:
     int lengthOfLongestSubstring(string s) {
        // Create a map to store the last index of each character
        unordered_map<char, int> charIndexMap;
        int maxLength = 0, start = 0;

        for (int end = 0; end < s.size(); ++end) {
            char currentChar = s[end];

            // If the character is already in the map and is within the current window
            if (charIndexMap.find(currentChar) != charIndexMap.end() && charIndexMap[currentChar] >= start) {
                // Move the start to the right of the last occurrence of the current character
                start = charIndexMap[currentChar] + 1;
            }

            // Update the last index of the current character
            charIndexMap[currentChar] = end;

            // Update the maximum length of the substring found so far
            maxLength = max(maxLength, end - start + 1);
        }

        return maxLength;
    }
};