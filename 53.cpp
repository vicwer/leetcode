class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res = INT_MIN;
        int size = nums.size();
        for(int i = 0; i < size; i++)
        {
            int cntMax = 0;
            for(int j = i; j < size; j++)
            {
                cntMax += nums[j];
                if(res < cntMax)
                {
                    res = cntMax;
                }
            }
        }

        return res;
    }
};
