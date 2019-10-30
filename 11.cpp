/* 暴力
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0;
        for(int i = 0; i < height.size() - 1; i++)
        {
            int val0 = height[i];
            for(int j = i + 1; j < height.size(); j++)
            {
                int cntArea = (j - i) * min(val0, height[j]);
                maxArea = maxArea > cntArea ? maxArea : cntArea;
            }
        }
        return maxArea;
    }
};
*/

// 双指针, 动态规划
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0;
        int left = 0;
        int right = height.size() - 1;
        while(left < right)
        {
            int cntArea = (right - left) * min(height[left], height[right]);
            maxArea = maxArea > cntArea ? maxArea : cntArea;
            if(height[left] > height[right])
            {
                right--;
            }
            else
            {
                left++;
            }
        }
        return maxArea;
    }
};
