class Solution {
public:
    string convertToTitle(int n) {
        string unionEnum[26] = {"A", "B", "C","D", "E", "F", "G", "H", "I", "J",
                                "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T",
                                "U", "V", "W", "X", "Y", "Z"};
        string res = "";
        while(n > 0)
        {
            n--;
            int mod = n % 26;
            n = n / 26;
            res = unionEnum[mod] + res;
        }

        return res;
    }
};
