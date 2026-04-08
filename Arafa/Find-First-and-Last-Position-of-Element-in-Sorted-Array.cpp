1class Solution {
2public:
3int rightIndex(vector<int> &nums, int target) {
4        int low = 0;
5        int high = nums.size()-1;
6        int mid;
7        int index = -1;
8
9        while(low <= high) {
10            mid = (low+high)/2;
11            if(nums[mid] == target) {
12                index = mid;
13                low = mid+1;
14            }
15            else if(nums[mid] > target) {
16                high = mid-1;
17            }
18            else {
19                low = mid+1;
20            }
21        }
22        return index;
23    }
24
25    int leftIndex(vector<int> &nums, int target) {
26        int low = 0;
27        int high = nums.size()-1;
28        int mid;
29        int index = -1;
30
31        while(low <= high) {
32            mid = (low+high)/2;
33            if(nums[mid] == target) {
34                index = mid;
35                high = mid-1;
36            }
37            else if(nums[mid] > target) {
38                high = mid-1;
39            }
40            else {
41                low = mid+1;
42            }
43        }
44        return index;
45    }
46
47    vector<int> searchRange(vector<int>& nums, int target) {
48        int left = leftIndex(nums, target);
49        int right = rightIndex(nums, target);
50        return {left, right};
51    }
52};