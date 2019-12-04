class Solution {
public:
    string int2string(int val) {
        if(val == 0)
        {
            return "0";
        }
        string res = "";
        while(val > 0)
        {
            int tmp = val % 10;
            val = val / 10;
            res.insert(res.begin(), tmp + 48);
        }

        return res;
    }

    string getHint(string secret, string guess) {
        int size = secret.size();
        map<char, int> dict;
        int countA = 0;
        int countB = 0;

        string s;
        string g;

        for(int i = 0; i < size; i++)
        {
            if(secret[i] != guess[i])
            {
                s.append(1u, secret[i]);
                g.append(1u, guess[i]);
            }
            else
            {
                countA++;
            }
        }
        size = s.size();
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
            if(dict.find(g[i]) != dict.end() && dict[g[i]] > 0)
            {
                countB++;
                dict[g[i]] -= 1;
            }
        }

        string res = int2string(countA);
        res = res + "A";
        res = res + int2string(countB);
        res = res + "B";

        return res;

    }
};


class Solution {
public:
    string int2string(int val) {
        if(val == 0)
        {
            return "0";
        }
        string res = "";
        while(val > 0)
        {
            int tmp = val % 10;
            val = val / 10;
            res.insert(res.begin(), tmp + 48);
        }

        return res;
    }

    string getHint(string secret, string guess) {
        int size = secret.size();
        map<char, int> dict;
        int countA = 0;
        int countB = 0;

        for(int i = 0; i < size; i++)
        {
            if(secret[i] == guess[i])
            {
                secret[i] = 'a';
                guess[i] = 'a';
                countA++;
            }
            else if(dict.find(secret[i]) == dict.end())
            {
                dict[secret[i]] = 1;
            }
            else
            {
                dict[secret[i]] += 1;
            }
        }

        for(int i = 0; i < size; i++)
        {
            if(secret[i] == 'a')
            {
                continue;
            }
            else if(dict.find(guess[i]) != dict.end() && dict[guess[i]] > 0)
            {
                countB++;
                dict[guess[i]] -= 1;
            }
        }

        return int2string(countA) + "A" + int2string(countB) + "B";

    }
};