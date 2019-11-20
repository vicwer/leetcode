class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;
        while(left < right)
        {
            int rest = target - numbers[left];
            if(numbers[right] == rest)
            {
                return {left+1, right+1};
            }
            else if(numbers[right] < rest)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return {};
    }
};
