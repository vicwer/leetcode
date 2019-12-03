// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long left = 1;
        long right = n;
        while(left < right)
        {
            long mid = (left + right) / 2;
            if(isBadVersion(mid))
            {
                if(!isBadVersion(mid-1))
                {
                    return mid;
                }
                else
                {
                    right = mid;
                }
            }
            else
            {
                if(isBadVersion(mid+1))
                {
                    return mid+1;
                }
                else
                {
                    left = mid;
                }
            }            
        }

        return n;
    }
};
