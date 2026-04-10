1class Solution {
2public:
3    string func(string & s) {
4        string res = "";
5        bool haveReachingAt = false;
6        bool haveReachingPlus = false;
7
8        for(const auto& c : s) {
9            if(c == '@') {
10                haveReachingAt = true;
11                res += c;
12            }
13            else if(haveReachingAt) {
14                res += c;
15            }
16            else {
17                if(c == '+') {
18                    haveReachingPlus = true;
19                }
20                else if(haveReachingPlus) {
21                
22                }
23                else {
24                    if(c != '.') {
25                        res += c;
26                    }
27                }
28            }
29        }
30        return res;
31    }
32
33    int numUniqueEmails(vector<string>& emails) {
34        set<string> mySet;
35
36        for(auto& element : emails) {
37            // apply some logic to remove + and .
38            string temp = func(element);
39            // add after clearing in set 
40            mySet.insert(temp);
41
42        }
43
44        return mySet.size();
45    }
46};