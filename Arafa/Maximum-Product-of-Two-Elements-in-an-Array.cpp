1class Solution {
2public:
3    int maxProduct(vector<int>& nums) {
4        priority_queue<int> q;
5        for(const auto& element : nums)
6        {
7            q.push(element);
8        }
9        int n1 = q.top(); q.pop();
10        int n2 = q.top(); q.pop();
11
12        return (n1-1)*(n2-1);
13    }
14};