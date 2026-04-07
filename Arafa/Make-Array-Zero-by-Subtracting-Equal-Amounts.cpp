1class Solution {
2public:
3    int getMinimum(vector<int>& nums)
4    {
5        int minVal = numeric_limits<int>::max();
6
7        for (const auto& element : nums) {
8            if (element != 0 && element < minVal) {
9                minVal = element;
10            }
11        }
12
13        return minVal;
14    }
15
16    void applySubtract(int value, vector<int>& nums) {
17        for(auto& element : nums)
18        {
19            if(element == 0) continue;
20            element = element - value;
21        }
22    }
23
24    int minimumOperations(vector<int>& nums) {
25        int counter = 0;
26
27        for(auto& element : nums)
28        {
29            int min = getMinimum(nums);
30            if(min == numeric_limits<int>::max())
31                break;
32            applySubtract(min, nums);
33            counter++;
34        }
35
36        return counter;
37    }
38};