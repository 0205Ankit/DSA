// using two pointer to check the palindrome

class Solution
{
public:
    bool isPalindrome(string s)
    {
        int start = 0;
        int end = s.size() - 1;
        for (int i = 0; i < s.size(); i++)
        {
            if (start == end)
                return true;
            if (!isalnum(s[start]))
            {
                start++;
                continue;
            };
            if (!isalnum(s[end]))
            {
                end--;
                continue;
            }
            if (tolower(s[start]) != tolower(s[end]))
                return false;

            start++;
            end--;
        }
        return true;
    };
};