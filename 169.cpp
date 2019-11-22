class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res = nums[0];
        int len = nums.size();
        int count = 1;
        for(int i = 1; i < len; i++)
        {
            if(res == nums[i])
            {
                count++;
            }
            else
            {
                count--;
                if(count == 0)
                {
                    res = nums[i+1];
                }
            }
        }
        return res;
    }
};
