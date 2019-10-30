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
