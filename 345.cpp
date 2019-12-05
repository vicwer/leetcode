class Solution {
public:
    string reverseVowels(string s) {
        int size = s.size();
        int left = 0;
        int right = size - 1;
        int leftF = 0;
        int rightF = 0;
        while(left < right)
        {
            while(left < right)
            {
                if(s[left] == 'a' || s[left] == 'e' || s[left] == 'i' ||
                    s[left] == 'o' || s[left] == 'u' || s[left] == 'A' ||
                    s[left] == 'E' || s[left] == 'I' || s[left] == 'O' ||
                    s[left] == 'U')
                {
                    leftF = 1;
                    break;
                }
                else
                {
                    left++;
                }
            }
            while(left < right)
            {
                if(s[right] == 'a' || s[right] == 'e' || s[right] == 'i' ||
                    s[right] == 'o' || s[right] == 'u' || s[right] == 'A' ||
                    s[right] == 'E' || s[right] == 'I' || s[right] == 'O' ||
                    s[right] == 'U')
                {
                    rightF = 1;
                    break;
                }
                else
                {
                    right--;
                }
            }

            if(leftF == 1 && rightF == 1)
            {
                char c = s[left];
                s[left] = s[right];
                s[right] = c;
                leftF = 0;
                rightF = 0;
                left++;
                right--;
            }
        }
        return s;
    }
};
