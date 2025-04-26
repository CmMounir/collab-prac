class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       vector<int> sizes;
       for(int index= 0; index < strs.size(); index++) {
            sizes.push_back(strs[index].length());
       }

       int i = 0;
       string result = "";
       int min_str_size = *min_element(sizes.begin(), sizes.end());
       while(i < min_str_size) {
        char letter = strs[0][i];
        for(int index= 1; index < strs.size(); index++) {
            if(strs[index][i] != letter) {
                return result;
            }
        }
        result += strs[0][i];
        i++;
       }

       return result;
    }
};