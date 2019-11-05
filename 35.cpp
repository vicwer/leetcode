// 二分法
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size();
        while(left < right)
        {
            int mid = (left + right) / 2;
            if(target == nums[mid])
            {
                return mid;
            }
            else if(target > nums[mid])
            {
                left = mid + 1;
            }
            else
            {
                right = mid;
            }
        }
        return left;
    }
};

// 暴力遍历
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int right = nums.size();
        for(int i = 0; i < right; i++)
        {
            if(nums[i] >= target)
            {
                return i;
            }
        }
        return right;
    }
};
