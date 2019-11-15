#include <iostream>
#include <stdlib.h>
#include <math.h>

class Solution {
public:
    int mySqrt(int x) {
        int left = 0;
        int right = x / 2;
        long long mid = 0;
        int res;
        while(left <= right)
        {
            mid = (left + right) / 2;
            if(mid * mid <= x)
            {
                res = mid;
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        return res;
    }
};

int main()
{
    Solution a;
    int res = a.mySqrt(89);
    std::cout << res << std::endl;
}
