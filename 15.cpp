class Solution {
public:
    int partation(vector<int>& nums, int begin, int end) {
        int firstLarge = begin;
        for(int i = begin; i < end; i++)
        {
            if(nums[i] <= nums[end-1])
            {
                if(i != firstLarge)
                {
                    swap(nums[i], nums[firstLarge]);
                }
                firstLarge++;
            }
        }
        return firstLarge - 1;
    }

    void quickSort(vector<int>& nums, int begin, int end) {
        if(begin < end - 1)
        {
            int mid = partation(nums, begin, end);
            quickSort(nums, begin, mid);
            quickSort(nums, mid+1, end);
        }
        return;
    }

    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        if(nums.size() < 3)
        {
            return res;
        }
        int size = nums.size();
        quickSort(nums, 0, size);
        for(int i = 0; i < size - 2; i++)
        {
            if(i > 0 && nums[i] == nums[i - 1])
            {
                continue;
            }
            int target = 0 - nums[i];
            int left = i + 1;
            int right = size - 1;
            while(left < right)
            {
                if(nums[left] + nums[right] == target)
                {
                    vector<int> cntV = {nums[i], nums[left], nums[right]};
                    res.push_back(cntV);
                    while(left < right)
                    {
                        if(nums[left] != nums[left+1])
                        {
                            left++;
                            break;
                        }
                        left++;
                    }
                    while(left < right)
                    {
                        if(nums[right] != nums[right-1])
                        {
                            right--;
                            break;
                        }
                        right--;
                    }
                }
                else if(nums[left] + nums[right] > target)
                {
                    right--;
                }
                else
                {
                    left++;
                }
            }
        }
        return res;
    }
};
