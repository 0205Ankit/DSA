#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int consecutive_ones = 0;
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                count++;
                consecutive_ones = max(consecutive_ones, count);
            }
            else
            {
                count = 0;
            }
        };

        return consecutive_ones;
    }
};
