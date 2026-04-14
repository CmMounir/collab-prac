1class Solution {
2public:
3    string reverseWords(string s) {
4        string res = "";
5
6        vector<string> myVec;
7        string temp = "";
8        for(int i = 0; i < s.length(); i++) {
9            if(s[i] == ' ') {
10                myVec.push_back(temp);
11                temp = "";
12            }
13            else {
14                temp += s[i];
15            }
16        }
17        myVec.push_back(temp);
18        
19        for(auto& element : myVec) {
20            reverse(element.begin(), element.end());
21            res += element + " ";
22        }
23
24        return string(res.begin(), res.end()-1);
25    }
26};