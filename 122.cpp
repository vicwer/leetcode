class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minVal = -1;
        int maxVal = -1;
        int res = 0;
        int size = prices.size();
        int left = 0;

        while(left < size - 1)
        {
            if(left == 0 && prices[left] < prices[left+1] || (left > 0 && prices[left] <= prices[left-1] && prices[left] < prices[left+1]))
            {
                minVal = prices[left];
                break;
            }
            left++;
        }

        while(left < size)
        {
            left++;
            if(left < size - 1 && prices[left] >= prices[left-1] && prices[left] > prices[left+1] || (left == size - 1 && prices[left] >= prices[left-1]))
            {
                maxVal = prices[left];
                break;
            }
        }

        if(minVal < 0 || maxVal < 0)
        {
            return 0;
        }

        res = maxVal - minVal;
        int haveMin = false;
        while(left < size - 2)
        {
            while(left < size - 2)
            {
                left++;
                if(prices[left] <= prices[left-1] && prices[left] < prices[left+1])
                {
                    minVal = prices[left];
                    haveMin = true;
                    break;
                }
            }
            if(haveMin)
            {
                while(left < size - 1)
                {
                    left++;
                    if(left == size - 1 && prices[left] >= prices[left-1] || (prices[left] >= prices[left-1] && prices[left] > prices[left+1]))
                    {
                        maxVal = prices[left];
                        res = res + maxVal - minVal;
                        haveMin = false;
                        break;
                    }
                }
            }
        }

        return res;
    }
};


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minVal = -1;
        int maxVal = -1;
        int res = 0;
        int size = prices.size();
        int left = 0;

        int haveMin = false;
        while(left < size - 1)
        {
            while(left < size - 1)
            {
                if(left == 0 && prices[left] < prices[left+1] || (left > 0 && prices[left] <= prices[left-1] && prices[left] < prices[left+1]))
                {
                    minVal = prices[left];
                    haveMin = true;
                    break;
                }
                left++;
            }
            if(haveMin)
            {
                while(left < size)
                {
                    left++;
                    if(left < size - 1 && prices[left] >= prices[left-1] && prices[left] > prices[left+1] || (left == size - 1 && prices[left] >= prices[left-1]))
                    {
                        maxVal = prices[left];
                        res = res + maxVal - minVal;
                        haveMin = false;
                        break;
                    }
                }
            }
        }

        return res;
    }
};

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0;
        int size = prices.size();
        if(size < 2)
        {
            return 0;
        }
        for(int i = 1; i < size; i++)
        {
            res = prices[i] - prices[i-1] > 0 ? res + prices[i] - prices[i-1] : res;
        }
        return res;
    }
};
