class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.empty())
        {
            return 0;
        }
        int size = s.size();
        int last = size - 1;
        while(s[last] == ' ')
        {
            last--;
        }
        for(int i = last; i >= 0; i--)
        {
            if(s[i] == ' ')
            {
                return last - i;
            }
        }
        return last >= 0 ? last + 1: 0;
    }
};