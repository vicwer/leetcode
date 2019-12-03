class Solution {
public:
    bool isAnagram(string s, string t) {
        int sizeS = s.size();
        int sizeT = t.size();
        if(sizeS != sizeT)
        {
            return false;
        }

        map<char, int> dictS;
        map<char, int> dictT;
        for(int i = 0; i < sizeS; i++)
        {
            if(dictS.find(s[i]) == dictS.end())
            {
                dictS[s[i]] = 1;
            }
            else
            {
                dictS[s[i]] += 1;
            }

            if(dictT.find(t[i]) == dictT.end())
            {
                dictT[t[i]] = 1;
            }
            else
            {
                dictT[t[i]] += 1;
            }
        }

        return dictS == dictT;
    }
};
