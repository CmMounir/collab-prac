class Solution {
public:
    int firstUniqChar(string s) {
        std::unordered_map<char, int> myMap;
        
        for(char x : s) {
            myMap[x]++;
        }

    for(int i =0 ; i < s.length(); i++) {
        if(myMap[s[i]] == 1) {
            return i;
        }
    }
    return -1;
    }
};