class Solution {
public:
    int strStr(string haystack, string needle) { if (needle.size() == 0)
        return 0;
    if (haystack.find(needle) != string::npos)
    {
        return haystack.find(needle);
    }
    return -1;
        
    }
};