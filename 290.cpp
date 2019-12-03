class Solution {
public:
    bool wordPattern(string pattern, string str) {
        map<char, string> dict;
        int size = pattern.size();
        int sizeS = str.size();
        vector<string> wordVec;
        string s = "";
        for(int i = 0; i < sizeS; i++)
        {
            if(str[i] == ' ')
            {
                wordVec.push_back(s);
                s = "";
            }
            else
            {
                s.append(1u, str[i]);
            }
        }
        wordVec.push_back(s);

        sizeS = wordVec.size();
        if(size != sizeS)
        {
            return false;
        }

        for(int i = 0; i < size; i++)
        {
            if(dict.find(pattern[i]) == dict.end())
            {
                for(auto &it : dict)
                {
                    if(it.second == wordVec[i])
                    {
                        return false;
                    }
                }
                dict[pattern[i]] = wordVec[i];
            }
            else
            {
                if(dict[pattern[i]] != wordVec[i])
                {
                    return false;
                }
            }
        }

        return true;
    }
};