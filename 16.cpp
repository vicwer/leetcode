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

    int threeSumClosest(vector<int>& nums, int target) {
        int closest = INT_MAX;
        int size = nums.size();
        int res = 0;
        quickSort(nums, 0, size);

        for(int i = 0; i < size - 2; i++)
        {
            int left = i + 1;
            int right = size - 1;
            while(left < right)
            {
                int sum = nums[i] + nums[left] + nums[right];
                int cntClosest = target - sum;
                if(cntClosest == 0)
                {
                    return target;
                }
                if(abs(cntClosest) <= abs(closest))
                {
                    closest = cntClosest;
                    res = sum;
                }
                if(cntClosest > 0)
                {
                    left++;
                }
                else
                {
                    right--;
                }
            }
        }
        return res;
    }
};
