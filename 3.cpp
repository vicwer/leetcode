class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0;
        string cntMaxS;
        for(auto i : s)
        {
            if(cntMaxS.empty())
            {
                cntMaxS.append(1u, i);
                continue;
            }
            std::size_t idx = cntMaxS.find(i);
            if(idx == string::npos)
            {
                cntMaxS.append(1u, i);
            }
            else
            {
                maxLen = cntMaxS.size() > maxLen ? cntMaxS.size() : maxLen;
                cntMaxS.erase(0, idx+1);
                cntMaxS.append(1u, i);
            }
        }

        return maxLen > cntMaxS.size() ? maxLen : cntMaxS.size();
    }
};
