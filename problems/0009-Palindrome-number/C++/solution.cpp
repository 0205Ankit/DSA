class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
        {
            return false;
        }
        else
        {
            int number = x;
            double rev_num = 0;
            while (number)
            {
                rev_num = rev_num * 10 + number % 10;
                number = number / 10;
            }
            if (rev_num > INT_MAX || rev_num < INT_MIN)
                return false;

            if (rev_num == x)
                return true;
            else
                return false;
        }
    }
};

// TODO: Solve with 2 pointer approach for both c++ and javscript