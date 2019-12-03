class Solution {
public:
    int countPrimes(int n) {
        int count = 0;
        vector<int> ary(n, 1);
        for(int i = 2; i < n; i++)
        {
            if(ary[i])
            {
                count++;
                for(int j = i * 2; j < n; j += i)
                {
                    ary[j] = 0;
                }
            }
        }

        return count;
    }
};
