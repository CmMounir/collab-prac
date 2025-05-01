class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i =0;
        int j =0;
        int t =0;
        vector<int> nums;
        while(i < m+n) {
            if(j < m && t < n) {
                if(nums1[j] < nums2[t]) {
                    nums.push_back(nums1[j]);
                    j++;
                }
                else {
                    nums.push_back(nums2[t]);
                    t++;
                }
            }
            else if(j < m) {
                nums.push_back(nums1[j]);
                j++;
            }
            else {
                nums.push_back(nums2[t]);
                t++;
            }
            i++;
        }
        nums1 = nums;
    }
};