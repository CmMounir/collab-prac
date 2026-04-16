1class Solution {
2public:
3    string addBinary(string a, string b) {
4        int n_a = a.length();
5        int n_b = b.length();
6        string res = "";
7        int remaining = 0;
8
9        int index_a = n_a - 1;
10        int index_b = n_b - 1;
11        
12        while(index_a > -1 || index_b > -1 || remaining != 0) {
13            int current_a;
14            if(index_a > -1) {
15                current_a = a[index_a]-'0';
16            }
17            else {
18                current_a = 0;
19            }
20
21            int current_b;
22            if(index_b > -1) {
23                current_b = b[index_b]-'0';
24            }
25            else {
26                current_b = 0;
27            }
28
29            switch(current_a + current_b + remaining) {
30                case 0: res = '0' + res; remaining = 0; break;
31                case 1: res = '1' + res; remaining = 0; break;
32                case 2: res = '0' + res; remaining = 1; break;
33                case 3: res = '1' + res; remaining = 1; break;
34            }
35
36            index_a--;
37            index_b--;
38        }
39        return res;
40    }
41};