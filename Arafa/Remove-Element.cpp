class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        vector<int> myVector;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != val) {
                k++;
                myVector.push_back(nums[i]);
            }
        }

        for(int i = 0; i < myVector.size(); i++) {
            nums[i] = myVector[i];
        }

        return k;
    }
};