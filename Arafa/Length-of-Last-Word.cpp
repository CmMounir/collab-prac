class Solution {
public:
    int lengthOfLastWord(string s) {
        int result = 0;
        bool first = true;
        for(int i = s.length()-1; i >= 0; i--) {
            if(s[i] == ' ') { 
                if(result == 0) 
                    continue;
                else
                    break;
            }
            else {
                result++;
            }
        }
        return result;
    }
};