class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size() - 1;
        int last = size;
        if(last == -1)
        {
            return {1};
        }
        if(digits[last] < 9)
        {
            digits[last] += 1;
            return digits;
        }
        int cntCarry = 0;
        while(last >= 0)
        {
            if(last == size)
            {
                cntCarry = digits[last] + 1;
            }
            else
            {
                cntCarry = digits[last] + cntCarry;
            }

            digits[last] = cntCarry % 10;
            cntCarry = cntCarry / 10;
            last--;
            if(cntCarry == 0)
            {
                break;
            }
        }
        if(cntCarry > 0)
        {
            digits.insert(digits.begin(), 1);
        }

        return digits;
    }
};
