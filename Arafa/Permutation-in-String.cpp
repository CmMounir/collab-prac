1class Solution {
2public:
3	int C2I(char c) {
4		return c-'a';
5	}
6	
7    bool checkInclusion(string s1, string s2) {
8        if (s1.size() > s2.size()) 
9			return false;
10
11        vector<int> count1(26, 0);
12		vector<int> count2(26, 0);
13
14        // Count s1
15        for (char c : s1) {
16            count1[C2I(c)]++;
17        }
18
19        int k = s1.size();
20
21        // Initial window
22		int x = 0;
23		for (char c : s2) {
24			if(x == k) {break;} x++;
25            count2[C2I(c)]++;
26        }
27		
28
29        if (count1 == count2) 
30			return true;
31		
32		int left = 0;
33		
34        // Sliding window
35        for (int i = k; i < s2.size(); i++) {
36            count2[C2I(s2[i])]++;             // add new char
37            count2[C2I(s2[left])]--;          // remove old char
38			left++;
39            if (count1 == count2) 
40				return true;
41        }
42
43        return false;
44    }
45};