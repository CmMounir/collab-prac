1class Solution {
2public:
3    string reverseWords(string s) {
4        string res = "";
5        stringstream ss(s);
6        
7        string word;
8        while(ss >> word) {
9            reverse(word.begin(), word.end());    
10            res += word + " ";
11        }
12        
13        res.pop_back();
14        
15        return res;
16    }
17};