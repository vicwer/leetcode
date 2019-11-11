class Solution {
public:
    string addBinary(string a, string b) {
        int sizeA = a.size() - 1;
        int lastA = sizeA;
        int sizeB = b.size() - 1;
        int lastB = sizeB;
        int cntCarry = 0;
        string res = "";
        while(lastA >= 0 && lastB >= 0)
        {
            int cntVal = a[lastA] + b[lastB] + cntCarry;
            if(cntVal == 96)
            {
                cntCarry = 0;
                res = "0" + res;
            }
            else if(cntVal == 97)
            {
                cntCarry = 0;
                res = "1" + res;
            }
            else if(cntVal == 98)
            {
                cntCarry = 1;
                res = "0" + res;
            }
            else
            {
                cntCarry = 1;
                res = "1" + res;
            }
            lastA--;
            lastB--;
        }
        while(lastA >= 0)
        {
            // if(cntCarry == 0)
            // {
            //     for(int i = lastA; i >= 0; i--)
            //     {
            //         res.insert(res.begin(), a[i]);
            //     }
            //     return res;
            // }
            int cntVal = a[lastA] + cntCarry;
            if(cntVal == 48)
            {
                cntCarry = 0;
                res = "0" + res;
            }
            else if(cntVal == 49)
            {
                cntCarry = 0;
                res = "1" + res;
            }
            else if(cntVal == 50)
            {
                cntCarry = 1;
                res = "0" + res;
            }
            else
            {
                cntCarry = 1;
                res = "1" + res;
            }
            lastA--;
        }
        while(lastB >= 0)
        {
            // if(cntCarry == 0)
            // {
            //     for(int i = lastB; i >= 0; i--)
            //     {
            //         res.insert(res.begin(), b[i]);
            //     }
            //     return res;
            // }
            int cntVal = b[lastB] + cntCarry;
            if(cntVal == 48)
            {
                cntCarry = 0;
                res = "0" + res;
            }
            else if(cntVal == 49)
            {
                cntCarry = 0;
                res = "1" + res;
            }
            else if(cntVal == 50)
            {
                cntCarry = 1;
                res = "0" + res;
            }
            else
            {
                cntCarry = 1;
                res = "1" + res;
            }
            lastB--;
        }
        if(cntCarry == 1)
        {
            res.insert(res.begin(), '1');
        }

        return res;
    }
};
