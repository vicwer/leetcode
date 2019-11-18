class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        for(int i = 0; i < numRows; i++)
        {
            vector<int> cntRows;
            for(int j = 0; j <= i; j++)
            {
                if(j == 0 || j == i)
                {
                    cntRows.push_back(1);
                }
                else
                {
                    cntRows.push_back(res[i-1][j-1]+res[i-1][j]);
                }
            }
            res.push_back(cntRows);
        }
        return res;
    }
};
