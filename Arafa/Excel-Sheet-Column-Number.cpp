1class Solution {
2public:
3    int titleToNumber(string columnTitle) {
4        /*
5        YZ = 25*(26^1) + 26*(26^0)
6        XYZ = 24*(26^2) + 25*(26^1) + 26*(26^0)
7
8        AA = 1*(26^1)+1*(26^0)
9        */
10        map<char, int> myMap;
11        for(int i = 0; i < 26; i++) {
12            myMap['A'+i] = i+1;
13        }
14      
15        long long res = 0;
16        long long mul = 1;
17
18        for(int i = columnTitle.length()-1; i > -1; i--) {
19            res += myMap[columnTitle[i]]*mul;
20            mul *= 26;
21        }
22
23        return (int)res;
24    }
25};