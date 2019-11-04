class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty())
        {
            return 0;
        }
        int srcSize = haystack.size();
        int dstSize = needle.size();

        if(dstSize > srcSize)
        {
            return -1;
        }
        for(int i = 0; i < srcSize; i++)
        {
            if(srcSize - i < dstSize)
            {
                return -1;
            }
            int res = i;
            if(haystack[i] == needle[0])
            {
                int j = 0;
                for(; j < dstSize; j++)
                {
                    if(haystack[i] != needle[j])
                    {
                        break;
                    }
                    i++;
                }
                if(j < dstSize)
                {
                    i = res;
                }
                else
                {
                    return res;
                }
            }
        }
        return -1;
    }
};
