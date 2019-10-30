class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0)
        {
            return "";
        }
        if(strs.size() == 1)
        {
            return strs[0];
        }

        string s;
        int minSize = INT_MAX;
        for(auto i : strs)
        {
            s = minSize > i.size() ? i : s;
            minSize = minSize > i.size() ? i.size() : minSize;
        }

        string res;
        for(int i = 0; i < s.size(); i++)
        {
            char c = s[i];
            for(int j = 0; j < strs.size(); j++)
            {
                if(strs[j][i] != c)
                {
                    return res;
                }
            }
            res.append(1u, c);
        }

        return res;
    }
};
