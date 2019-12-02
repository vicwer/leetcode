class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.empty())
        {
            return;
        }
        int size = nums.size();
        if(size <= k)
        {
            k = k % size;
        }

        vector<int> tmp;
        for(int i = size - k; i < size; i++)
        {
            tmp.push_back(nums[i]);
        }

        for(int i = size - k - 1; i >= 0; i--)
        {
            nums[i + k] = nums[i];
        }

        for(int i = 0; i < k; i++)
        {
            nums[i] = tmp[i];
        }
        return;
    }
};
