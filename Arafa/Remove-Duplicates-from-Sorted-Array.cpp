class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> mySet;

        for(int i= 0; i < nums.size(); i++) {
           mySet.insert(nums[i]); 
        }

        int i = 0;
        for (const int& element : mySet) {
            nums[i] = element;
            i++;
        }

        return mySet.size();
    }
};