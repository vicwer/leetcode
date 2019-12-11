class Solution {
public:
    char findTheDifference(string s, string t) {
        int size = s.size();
        map<char, int> dict;
        for(int i = 0; i < size; i++)
        {
            if(dict.find(s[i]) == dict.end())
            {
                dict[s[i]] = 1;
            }
            else
            {
                dict[s[i]] += 1;
            }
        }

        for(int i = 0; i < size + 1; i++)
        {
            if(dict[t[i]] == 0)
            {
                return t[i];
            }
            else
            {
                dict[t[i]] -= 1;
            }
        }

        return -1;
    }
};