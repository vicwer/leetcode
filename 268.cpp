class Solution {
public:
    int missingNumber(vector<int>& nums) {
        if(nums.empty())
        {
            return 0;
        }
        int size = nums.size();
        vector<int> ary(size+1, 0);
        for(int i = 0; i < size; i++)
        {
            ary[nums[i]] = 1;
        }

        for(int i = 0; i <= size; i++)
        {
            if(ary[i] == 0)
            {
                return i;
            }
        }

        return 0;
    }
};
