1class Solution {
2public:
3    vector<string> fizzBuzz(int n) {
4        vector<string> res(n);
5
6        for(int i = 0; i < n; i++) {
7            if((i+1)%3 == 0 && (i+1)%5 == 0) {
8                res[i] = "FizzBuzz";
9            }
10            else if((i+1)%3 == 0) {
11                res[i] = "Fizz";
12            }
13            else if((i+1)%5 == 0) {
14                res[i] = "Buzz";
15            }
16            else {
17                res[i] = to_string(i+1);
18            }
19        }
20        return res;
21    }
22};