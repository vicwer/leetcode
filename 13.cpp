class Solution {
public:
    int romanToInt(string s) {
        //vector<int> numEnum = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4 ,1};
        //vector<string> strEnum = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        int num = 0;
        for(int i = s.size() - 1; i >= 0; i--)
        {
            if(s[i] == 'I')
            {
                if(i < s.size()-1 && (s[i+1] == 'X' || s[i+1] == 'V'))
                {
                    num -= 1;
                }
                else
                {
                    num += 1;
                }
            }
            else if(s[i] == 'V')
            {
                num += 5;
            }
            else if(s[i] == 'X')
            {
                if(i < s.size() - 1 && (s[i+1] == 'C' || s[i+1] == 'L'))
                {
                    num -= 10;
                }
                else
                {
                    num += 10;
                }
            }
            else if(s[i] == 'L')
            {
                num += 50;
            }
            else if(s[i] == 'C')
            {
                if(i < s.size() - 1 && (s[i+1] == 'D' || s[i+1] == 'M'))
                {
                    num -= 100;
                }
                else
                {
                    num += 100;
                }
            }
            else if(s[i] == 'D')
            {
                num += 500;
            }
            else if(s[i] == 'M')
            {
                num += 1000;
            }
        }
        return num;
    }
};
