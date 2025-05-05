class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        vector<int> new_nums = {nums.at(0)};
        int k = 0;  // new_nums index interator
        for(int i=1;i<nums.size();++i)
        {
            if(new_nums.at(k) != nums.at(i))
            {
                //new different values
                new_nums.push_back(nums.at(i));
                ++k;
            }
        }
        nums = new_nums;
        return new_nums.size();
    }
};