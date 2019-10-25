class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = nums.size();
        for(int i = 0; i < len; i++)
        {
            int rest = target - nums[i];
            // use map ?
            for(int j = i + 1; j < len; j++)
            {
                if(nums[j] == rest)
                {
                    return {i, j};
                }
            }
        }
        return {};
    }
};
