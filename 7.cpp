class Solution {
public:
    int reverse(int x) {
        long res = 0;
        int min = INT_MIN;
        int max = INT_MAX;
        while(x)
        {
            res = res * 10 + x % 10;
            x = x / 10;
        }
        return res > max ? 0 : (res < min ? 0 : res);
    }
};
