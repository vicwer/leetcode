class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int size = nums.size();
        map<int, int> dict;
        for(int i = 0; i < size; i++)
        {
            if(i == 0)
            {
                dict[nums[i]] = 1;
            }
            else
            {
                if(dict[nums[i]] == 1)
                {
                    return true;
                }
                else
                {
                    dict[nums[i]] = 1;
                }
            }
        }

        return false;
    }
};
