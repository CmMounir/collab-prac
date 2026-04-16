1class Solution {
2public:
3    string convertToTitle(int columnNumber) {
4        // prepare map
5        map<int, char> myMap;
6        for(int i = 0; i < 26; i++) {
7            myMap[i+1] = 'A'+i;
8        }
9
10        string res = "";
11        int n= columnNumber;
12
13        while(n > 0) {
14            n--;
15            res = myMap[n%26 + 1] + res;
16            cout << res << "\n";
17            n = n/26;
18        }
19
20        return res;
21    }
22};