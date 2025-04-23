class Solution {
public:
    int strStr(string haystack, string needle) {
           int index = haystack.find(needle.c_str());
    if(index == std::string::npos)
        return -1;
    else
        return index; 
    }
};