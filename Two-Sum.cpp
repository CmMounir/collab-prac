class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mymap;
        vector<int> result;
        pair<map<int,int>::iterator, bool> ret;
        map<int,int>::iterator it;
        for(int i=0; i<nums.size(); ++i)
        {
           ret = mymap.insert({target-nums[i],i});
           if(false==ret.second && nums[i]==(target-nums[i]))
           {
                result.push_back(ret.first->second);
                result.push_back(i);
                return result;
           }
            
        }
        for(int i=0; i<nums.size(); ++i)
        {
            it = mymap.find(nums[i]);
            if(it!=mymap.end()&& nums[i]!=(target-nums[i]))
            {
                result.push_back(i);
                result.push_back(it->second);
                break;
            }
            
        }
        return result; 
        
    }
};