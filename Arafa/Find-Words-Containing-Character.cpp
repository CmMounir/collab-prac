1class Solution {
2public:
3    vector<int> findWordsContaining(vector<string>& words, char x) {
4        vector<int> res;
5
6        for(int i = 0; i < words.size(); i++) {
7            if(words[i].contains(x) != false) {
8                res.push_back(i);
9            }
10        }
11
12        return res;
13    }
14};