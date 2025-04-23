class Solution {
public:
   vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
            unordered_map<int,bool> occurences;
            vector<int> result;
            for (int i = 0; i < nums1.size(); i++)
            {
                occurences[nums1[i]] = false;
            }

            for (int i = 0; i < nums2.size(); i++)
            {
                if (occurences.find(nums2[i]) != occurences.end())
                {
                    occurences[nums2[i]] = true;
                }
            }

            for (const auto& pair : occurences)
            {
                if (pair.second)
                {
                    result.push_back(pair.first);
                }
            }
            return result;
        }
};