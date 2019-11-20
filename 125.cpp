class Solution {
public:
    // 65-90 97-122 48-57
    bool isPalindrome(string s) {
        int size = s.size();
        if(size < 2)
        {
            return true;
        }
        int left = 0;
        int right = size - 1;
        while(left <= right)
        {
            while(s[left] < '0' || s[left] > 'z' || s[left] > '9' && s[left] < 'A' || s[left] > 'Z' && s[left] < 'a')
            {
                left++;
                if(left > right)
                {
                    return true;
                }
            }
            while(s[right] < '0' || s[right] > 'z' || s[right] > '9' && s[right] < 'A' || s[right] > 'Z' && s[right] < 'a')
            {
                right--;
                if(right < left)
                {
                    return true;
                }
            }

            char l = s[left] < 'a' ? s[left] + 32 : s[left];
            char r = s[right] < 'a' ? s[right] + 32 : s[right];
            if(l != r)
            {
                return false;
            }
            else
            {
                left++;
                right--;
            }
        }

        return true;
    }
};
