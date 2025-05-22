class Solution {
public:
    bool isVowel(char character) {
         if(character == 'a' || character == 'A' ||
            character == 'e' || character == 'E' ||
            character == 'o' || character == 'O' ||
            character == 'u' || character == 'U' ||
            character == 'i' || character == 'I') {
                return true;
            }
            return false;
    }
    string reverseVowels(string s) {
        int left = 0;
        int right = s.size()-1;

        while(left < right) {
            if(!isVowel(s[left]))  {left++; continue;}
            if(!isVowel(s[right])) {right--; continue;}
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            left++;
            right--;
        }
        
        return s;
    }
};