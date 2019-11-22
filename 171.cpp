class Solution {
public:
    int titleToNumber(string s) {
        int len = s.size();
        int res = 0;
        for(int i = 0; i < len; i++)
        {
            res += pow(26, len - i - 1) * (s[i] - 'A' + 1);
        }

        return res;
    }
};
