1class Solution {
2public:
3    string reverseVowels(string s) {
4        vector<char> myVec;
5
6        for(int i = s.length()-1; i > -1; i--) {
7            switch(s[i]) {
8                case 'a':
9                case 'A':
10                case 'e':
11                case 'E':
12                case 'i':
13                case 'I':
14                case 'o':
15                case 'O':
16                case 'u':
17                case 'U':
18                    myVec.push_back(s[i]);
19                    break;
20                default :
21                    break;
22            }
23        }
24
25        int counter = 0;
26        for(int i = 0; i < s.length(); i++) {
27            switch(s[i]) {
28                case 'a':
29                case 'A':
30                case 'e':
31                case 'E':
32                case 'i':
33                case 'I':
34                case 'o':
35                case 'O':
36                case 'u':
37                case 'U':
38                    s[i] = myVec[counter++];
39                    break;
40                default :
41                    break;
42            }
43        }
44        return s;
45    }
46};