class Solution {
public:
    int firstUniqChar(string s) {
        for(int i =0;i<s.size();i++)
        {
            bool noDuplicate=true;
            for(int x =0;x<s.size();x++)
            {
                if((s[i]==s[x])&&(i!=x))
                {
                    noDuplicate=false;
                    break;
                }
            }
            if(noDuplicate)
            {
                return i;
            }
        }
        return -1;
    }
};