class Solution {
public:
    void reverseString(vector<char>& s) {
        int size = s.size();
        int left = 0;
        int right = size - 1;
        while(left < right)
        {
            char c = s[left];
            s[left] = s[right];
            s[right] = c;
            left++;
            right--;
        }
    }
};