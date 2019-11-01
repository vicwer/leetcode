class Solution {
public:
    bool isValid(string s) {
        string diffS;
        for(int i = 0; i < s.size(); i++)
        {
            if(i == 0)
            {
                diffS.append(1u, s[i]);
            }
            else
            {
                if(s[i] == '}')
                {
                    if('{' == diffS[diffS.size()-1])
                    {
                        diffS.erase(diffS.begin() + diffS.size() - 1);
                    }
                    else
                    {
                        return false;
                    }
                }
                else if(s[i] == ']')
                {
                    if('[' == diffS[diffS.size()-1])
                    {
                        diffS.erase(diffS.begin() + diffS.size() - 1);
                    }
                    else
                    {
                        return false;
                    }
                }
                else if(s[i] == ')')
                {
                    if('(' == diffS[diffS.size()-1])
                    {
                        diffS.erase(diffS.begin() + diffS.size() - 1);
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    diffS.append(1u, s[i]);
                }
            }
        }
        return diffS.size() > 0 ? false : true;
    }
};


/**
 * 方法2:
 * ascii码: [40, 41, 91, 93, 123, 125]
 */
class Solution {
public:
    bool isValid(string s) {
        string diffS;
        for(int i = 0; i < s.size(); i++)
        {
            if(i == 0)
            {
                diffS.append(1u, s[i]);
            }
            else
            {
                if(s[i] == '}' || s[i] == ']' || s[i] == ')')
                {
                    if(s[i] - diffS[diffS.size() - 1] == 1 || s[i] - diffS[diffS.size() - 1] == 2)
                    {
                        diffS.erase(diffS.begin() + diffS.size() - 1);
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    diffS.append(1u, s[i]);
                }
            }
        }
        return diffS.size() > 0 ? false : true;
    }
};
