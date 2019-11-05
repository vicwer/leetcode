class Solution {
public:
    string countAndSay(int n) {
        string res;
        for(int i = 1; i <= n; i++)
        {
            if(i == 1)
            {
                res = "1";
            }
            else
            {
                string cntS = "";
                char cntC;
                int cntNum = 0;
                for(int j = 0; j < res.size(); j++)
                {
                    if(j == 0)
                    {
                        cntC = res[j];
                        cntNum = 1;
                    }
                    else
                    {
                        if(cntC == res[j])
                        {
                            cntNum += 1;
                        }
                        else
                        {
                            cntS.append(1u, 48 + cntNum);
                            cntS.append(1u, cntC);
                            cntC = res[j];
                            cntNum = 1;
                        }
                    }
                }
                cntS.append(1u, 48 + cntNum);
                cntS.append(1u, cntC);
                res = cntS;
                cntS = "";
            }
        }
        return res;
    }
};
