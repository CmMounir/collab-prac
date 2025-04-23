class Solution {
    public:
        int firstUniqChar(string s) {
            unordered_map<char, int> char_num_occ_map;
            for ( auto it = s.begin(); it != s.end(); it++)
            {
                if (char_num_occ_map.find(*it) != char_num_occ_map.end())
                {
                    char_num_occ_map[*it]++;
                }
                else
                {
                    char_num_occ_map[*it] = 1;
                }
            }

            for (int i = 0; i < s.size(); i++)
            {
                if (char_num_occ_map[s[i]] == 1)
                {
                    return i;
                } 
            }
            
            return -1;
        }
    };