class Solution {
public:
    int addDigits(int num) {
        while(num > 9)
        {
            int cntNum = num;
            int cntRes = 0;
            while(cntNum > 0)
            {
                cntRes += cntNum % 10;
                cntNum /= 10; 
            }
            num = cntRes;
        }

        return num;
    }
};