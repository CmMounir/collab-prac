class Solution {
public:
    int firstUniqChar(string s) 
    {
        int index;
        int times_found = 0;;
        bool index_found = false;
        for(int i=0;i<s.size();++i)
        {
            times_found = 0;
            char current_char = s.at(i);
            for(int j=0;j<s.size();++j)
            {
                index = i;
                index_found = true;
                if(s.at(j) == current_char)
                    ++times_found;
                if(s.at(j) == current_char && times_found > 1)
                {
                    index_found = false;
                    break;
                }
            }
            if(index_found)
                return index;
        }
        //index not found
        return -1;
    }
};