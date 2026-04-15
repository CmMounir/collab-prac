1class Solution {
2public:
3    bool wordPattern(string pattern, string s) {
4        map<char, string> myMap;
5        set<string> mySet;
6
7        stringstream ss(s);
8        string word;
9
10        int i = 0;
11        while(ss >> word) {
12            if(i == pattern.length())
13                return false;
14            if(myMap.find(pattern[i]) == myMap.end()) { // no mapping exists
15                if(mySet.find(word) == mySet.end()) { // check if mapped word is exist
16                    myMap[pattern[i]] = word;
17                    mySet.insert(word);
18                }
19                else {
20                    return false;
21                }
22            }
23            else { 
24                if (myMap[pattern[i]] != word) // check the existing mapping
25                    return false;
26            }
27
28            i++;
29        }
30
31        if(i < pattern.length())
32            return false;
33        else 
34            return true;
35    }
36};