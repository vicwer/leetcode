class Solution {
public:
    int firstUniqChar(string s) {
        int size = s.size();
        map<int, int> dict;
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

        for(int i = 0; i < size; i++)
        {
            if(dict[s[i]] == 1)
            {
                return i;
            }
        }

        return -1;
    }
};