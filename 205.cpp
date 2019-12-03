class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int size = s.size();
        map<char, char> dict;
        for(int i = 0; i < size; i++)
        {
            if(i == 0)
            {
                dict[s[i]] = t[i];
            }
            else
            {
                if(dict.count(s[i]))
                {
                    if(dict[s[i]] == t[i])
                    {
                        continue;
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    map<char, char>::iterator it;
                    for(it = dict.begin(); it != dict.end(); it++)
                    {
                        if(it->second == t[i])
                        {
                            return false;
                        }
                    }
                    dict[s[i]] = t[i];
                }
            }
        }

        return true;
    }
};
