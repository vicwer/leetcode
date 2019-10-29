class Solution {
public:
    int myAtoi(string str) {
        string u = "0123456789";

        // 去空格
        while(str.size())
        {
            if(str[0] != ' ')
            {
                break;
            }
            str.erase(str.begin());
        }

        if(str.size() == 0)
        {
            return 0;
        }

        // 转换
        long num = 0;
        int sign = 1;
        for(int i = 0; i < str.size(); i++)
        {
            if(i == 0)
            {
                if(str[0] == '-')
                {
                    sign = -1;
                    continue;
                }
                if(str[0] == '+')
                {
                    sign = 1;
                    continue;
                }
            }
            if(u.find(str[i]) == -1)
            {
                break;
            }
            num = num * 10 + (str[i] - 48);
            if(num > (long)INT_MAX + 1)
            {
                break;
            }
        }

        // 判断越界
        num = sign * num;
        return num > INT_MAX ? INT_MAX : (num < INT_MIN ? INT_MIN : num);
    }
};
