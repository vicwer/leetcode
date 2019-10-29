class Solution {
public:
    string longestPalindrome(string s) {
        int maxLen = 0;
        
        string maxLenS;
        for(int j = 0; j < s.size(); j++)
        {
            string cntS;
            if(s.size() - j < maxLen)
            {
                continue;
            }
            for(int i = j; i < s.size(); i++)
            {
                if(cntS.empty())
                {
                    cntS.append(1u, s[i]);
                    continue;
                }

                cntS.append(1u, s[i]);
                int left = 0;
                int right = cntS.size() - 1;
                while(left < right)
                {
                    if(cntS[left] != cntS[right])
                    {
                        break;
                    }
                    left++;
                    right--;
                }
                if(left >= right)
                {
                    maxLenS = maxLen > cntS.size() ? maxLenS : cntS;
                    maxLen = maxLen > cntS.size() ? maxLen : cntS.size();
                }
            }
        }
        string tmpS;
        if(s.size() > 0)
        {
            tmpS.append(1u, s[0]);
        }
        return maxLen == 0 ? (s.size() > 0 ? tmpS : maxLenS) : maxLenS;
    }
};
