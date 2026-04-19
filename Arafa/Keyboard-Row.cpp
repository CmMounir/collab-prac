1class Solution {
2public:
3    vector<string> findWords(vector<string>& words) {
4        vector<string> res;
5
6        bool inFirstRow = false;
7        bool inSecondRow = false;
8        bool inThirdRow = false;
9
10        set<char> firstRowCharacters = {'q','w','e','r','t','y','u','i','o','p'};
11        set<char> secondRowCharacters = {'a','s','d','f','g','h','j','k','l'};
12        set<char> thirdRowCharacters = {'z','x','c','v','b','n','m'};
13
14        for(const auto& word : words) {
15            inFirstRow = false;
16            inSecondRow = false;
17            inThirdRow = false;
18
19            for(const auto& c : word) {
20                if(firstRowCharacters.find(tolower(c)) != firstRowCharacters.end()) {
21                    inFirstRow = true;
22                }
23                else if(secondRowCharacters.find(tolower(c)) != secondRowCharacters.end()) {
24                    inSecondRow = true;
25                }
26                else if(thirdRowCharacters.find(tolower(c)) != thirdRowCharacters.end()) {
27                    inThirdRow = true;
28                }
29            }
30
31            if( (inFirstRow && !inSecondRow && !inThirdRow) || 
32                (!inFirstRow && inSecondRow && !inThirdRow) ||
33                (!inFirstRow && !inSecondRow && inThirdRow)
34            ) {
35                res.push_back(word);
36            }
37        }
38
39        return res;
40    }
41};