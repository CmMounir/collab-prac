class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        for(const auto& element : nums1) {
            for(int i = 0; i < nums2.size(); i++) {
                if(element == nums2[i]) {
                    if(i+1 == nums2.size()) {
                        result.push_back(-1);
                    }
                    else {
                        bool flag = false;
                        int t;
                        for(t = i+1; t < nums2.size(); t++) {
                            if(nums2[t] > element) { 
                                flag = true; 
                                break;
                            }
                        }
                        if(flag)
                            result.push_back(nums2[t]);
                        else 
                            result.push_back(-1);
                    }
                }
            }
        }
        return result;
    }
};