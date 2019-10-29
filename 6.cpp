class Solution {
public:
    string convert(string s, int numRows) {
        int stride = numRows - 2;
        int w = numRows + stride;
        int len = s.size();
        int group = (int)((float)len / (float)(2 * numRows - 2) + 1);
        if(numRows == 1)
        {
            group = len;
            w = 1;
        }
        string newS;

        for(int i = 0; i < numRows; i++)
        {
            for(int j = 0; j < group; j++)
            {
                if(i == 0)
                {
                    if(j * w >= len)
                    {
                        continue;
                    }
                    newS.append(1u, s[j * w]);
                }
                else if(i == numRows - 1)
                {
                    if(j * w + i >= len)
                    {
                        continue;
                    }
                    newS.append(1u, s[j * w + i]);
                }
                else
                {
                    int idx0 = j * w + i;
                    int idx1 = j * w + w - i;
                    if(idx0 >= len)
                    {
                        continue;
                    }
                    newS.append(1u, s[idx0]);
                    if(idx1 >= len)
                    {
                        continue;
                    }
                    newS.append(1u, s[idx1]);
                }
            }
        }

        return newS;
    }
};
