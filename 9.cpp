class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
        {
            return false;
        }

        // for faster
        if(x == 0)
        {
            return true;
        }
        if(x % 10 == 0)
        {
            return false;
        }

        long convert = 0;
        int cntX = x;
        while(cntX)
        {
            convert = convert * 10 + cntX % 10;
            cntX = cntX / 10;
        }

        return x == convert;
    }
};
