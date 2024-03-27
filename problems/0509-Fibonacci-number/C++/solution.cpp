// using recursion
class Solution
{

public:
    int fib(int n)
    {
        if (n == 0)
            return 0;
        if (n == 1)
            return 1;
        return fib(n - 1) + fib(n - 2);
    }
};

// using iterator
class Solution
{
public:
    int fib(int n)
    {
        if (n == 0)
        {
            return 0;
        }
        vector<int> v = {0, 1};
        for (int i = 2; i <= n; i++)
        {
            int val = v[i - 1] + v[i - 2];
            v.push_back(val);
        }
        return v.back();
        // return v[n] ;
    }
};

// TODO: using DP