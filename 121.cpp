class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minVal = INT_MAX;
        int size = prices.size();
        int res = INT_MIN;
        for(int i = 0; i < size; i++)
        {
            if(minVal > prices[i])
            {
                minVal = prices[i];
            }
        }
        for(int i = 0; i < size; i++)
        {
            for(int j = i; j < size; j++)
            {
                if(prices[j] > prices[i])
                {
                    int cntVal = prices[j] - prices[i];
                    res = res > cntVal ? res : cntVal;
                }
            }
            if(prices[i] == minVal)
            {
                break;
            }
        }
        return res > 0 ? res : 0;
    }
};

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minVal = INT_MAX;
        int size = prices.size();
        int res = INT_MIN;
        for(int i = 0; i < size; i++)
        {
            if(minVal < prices[i])
            {
                continue;
            }
            else
            {
                minVal = prices[i];
            }
            for(int j = i; j < size; j++)
            {
                if(prices[j] > prices[i])
                {
                    int cntVal = prices[j] - prices[i];
                    res = res > cntVal ? res : cntVal;
                }
            }
        }
        return res > 0 ? res : 0;
    }
};

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minVal = INT_MAX;
        int size = prices.size();
        int res = 0;
        for(int i = 0; i < size; i++)
        {
            minVal = minVal > prices[i] ? prices[i] : minVal;
            res = res > prices[i] - minVal ? res : prices[i] - minVal;
        }
        return res;
    }
};
