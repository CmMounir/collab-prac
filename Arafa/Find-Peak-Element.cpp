1class Solution {
2public:
3    int findPeakElement(vector<int>& nums) {
4        int res = 0;
5        int n = nums.size();
6        for(int i = 0; i < n; i++)
7        {
8            int previousIndex = i-1;
9            int nextIndex = i+1;
10            int currentIndex = i;
11
12            if(currentIndex == 0 && nextIndex < n && nums[currentIndex] > nums[nextIndex]) {
13                res = currentIndex;
14                break;
15            }
16            else if(currentIndex == n-1 && previousIndex >= 0 && nums[currentIndex] > nums[previousIndex])
17            {
18                res = currentIndex;
19                break;
20            }
21            else if(previousIndex >= 0 && nums[currentIndex] > nums[previousIndex] && nextIndex < n && nums[currentIndex] > nums[nextIndex]) {
22                res = currentIndex;
23                break;
24            }
25
26        }
27
28        return res; 
29    }
30};