/* 枚举一
class Solution {
public:
    string intToRoman(int num) {
        string mEnum[] = {"", "M", "MM", "MMM"};
        string cEnum[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
        string xEnum[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
        string iEnum[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
        string res = "";
        int val = num / 1000;
        num = num % 1000;
        // res.append(mEnum[val]);
        res = res + mEnum[val];

        val = num / 100;
        num = num % 100;
        res = res + cEnum[val];

        val = num / 10;
        num = num % 10;
        res = res + xEnum[val];

        res = res + iEnum[num];

        return res;
    }
};
*/

class Solution {
public:
    string intToRoman(int num) {
        vector<int> numEnum = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4 ,1};
        vector<string> strEnum = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

        string res = "";
        for(int i = 0; i < 13; i++)
        {
            while(num >= numEnum[i])
            {
                res += strEnum[i];
                num -= numEnum[i];
            }
        }
        return res;
    }
};
