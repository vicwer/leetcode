class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int size = nums.size();
        map<int, int> dict;
        for(int i = 0; i < size; i++)
        {
            if(i == 0)
            {
                dict[nums[i]] = i;
            }
            else
            {
                if(dict.find(nums[i]) != dict.end() && i - dict[nums[i]] <= k)
                {
                    return true;
                }
                else
                {
                    dict[nums[i]] = i;
                }
            }
        }

        return false;
    }
};
