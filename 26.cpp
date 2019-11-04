// 暴力比较删除
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        if(size < 2)
        {
            return nums.size();
        }

        for(int i = 0; i < nums.size() - 1; i++)
        {
            if(nums[i] == nums[i + 1])
            {
                nums.erase(nums.begin()+i);
                i--;
            }
        }

        return nums.size();
    }
};

// 伪删除
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 0;
        if(nums.size() < 2)
        {
            return nums.size();
        }

        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] != nums[count])
            {
                nums[++count] = nums[i];
            }
        }
        return count + 1;
    }
};
