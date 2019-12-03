class Solution {
public:
    bool isPowerOfTwo(int n) {
        int res = 1;
        int count = 1;
        while(res < n)
        {
            res *= 2;
            count++;
            if(count == 31)
            {
                break;
            }
        }

        return res == n ? true : false;
    }
};


class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n > 0 && (n & (n - 1) == 0);
    }
};
