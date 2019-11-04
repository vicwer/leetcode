// 双指针
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.empty())
        {
            return 0;
        }
        int left = 0;
        int right = nums.size() - 1;
        while(left < right)
        {
            if(nums[left] == val)
            {
                swap(nums[left], nums[right]);
                right--;
            }
            else
            {
                left++;
            }
        }
        return nums[left] == val ? left : left + 1;
    }
};

// 遍历,双指针赋值
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.empty())
        {
            return 0;
        }
        int count = 0;
        int size = nums.size();
        for(int i = 0; i < size; i++)
        {
            if(nums[i] != val)
            {
                nums[count] = nums[i];
                count++;
            }
        }
        return count;
    }
};
