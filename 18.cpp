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

    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        int size = nums.size();
        if(size < 4)
        {
            return res;
        }
        quickSort(nums, 0, size);
        for(int i = 0; i < size - 3; i++)
        {
            if(i > 0 && nums[i] == nums[i-1])
            {
                continue;
            }
            int rest = target - nums[i];
            for(int j = i + 1; j < size - 2; j++)
            {
                int cntRest = rest - nums[j];
                if(j > i + 1 && nums[j] == nums[j-1])
                {
                    continue;
                }

                int left = j + 1;
                int right = size - 1;
                while(left < right)
                {
                    if(nums[left] + nums[right] == cntRest)
                    {
                        res.push_back({nums[i], nums[j], nums[left], nums[right]});
                        while(left < right)
                        {
                            if(nums[left] != nums[left + 1])
                            {
                                left++;
                                break;
                            }
                            left++;
                        }
                        while(left < right)
                        {
                            if(nums[right] != nums[right - 1])
                            {
                                right--;
                                break;
                            }
                            right--;
                        }
                    }
                    else if(nums[left] + nums[right] < cntRest)
                    {
                        left++;
                    }
                    else
                    {
                        right--;
                    }
                }
            }
        }
        return res;
    }
};
