class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res;
        int cntj_1 = 0;
        if(rowIndex <= 1)
        {
            for(int i = 0; i <= rowIndex; i++)
            {
                res.push_back(1);
            }
            return res;
        }
        res = {1, 1};
        for(int i = 2; i <= rowIndex; i++)
        {
            for(int j = 0; j <= i; j++)
            {
                if(j == 0)
                {
                    cntj_1 = 1;
                    continue;
                }
                else if(j == i)
                {
                    res.push_back(1);
                }
                else
                {
                    int tmp = res[j];
                    res[j] = cntj_1 + res[j];
                    cntj_1 = tmp;
                }
            }
        }
        return res;
    }
};
