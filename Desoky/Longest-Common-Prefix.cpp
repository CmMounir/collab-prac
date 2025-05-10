class Solution {
public:

string find_shortest_string(vector<string>& strs)
{
    string min_str = strs.at(0);
    for(int i=1;i<strs.size();++i)
    {
        if(strs.at(i).size() < min_str.size())
            min_str = strs.at(i);
    }
    return min_str;
}

string longestCommonPrefix(vector<string>& strs) 
{
    string prefix_string = find_shortest_string(strs);
    int prefix_string_len = prefix_string.size();
    bool prefix_found = false;
    for(int i=0;i<prefix_string_len;++i)
    {
        for(int j=0;j<strs.size();++j)
        {
            bool breaked = false;
            for(int k=0;k<prefix_string_len;++k)
            {
                if(strs.at(j).at(k) != prefix_string.at(k))
                {
                    prefix_found = false;
                    breaked = true;
                    break;
                }
                prefix_found = true;    //if all strings has the prefix, it will still as true
            }
            if(breaked)
                break;  //to break from the outer loop
        }
        if(prefix_found)
        {
            return prefix_string;
        }
        else
        {
            //each iteration remove one character from the prefix
            prefix_string.erase(prefix_string_len-1);
            --prefix_string_len;
            --i;
        }
    }
    return \\;  //if no common prefix found
}
};