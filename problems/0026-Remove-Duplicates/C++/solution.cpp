#include <vector>

using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int j = 0;

        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] != nums[j])
            {
                nums[j + 1] = nums[i];
                j++;
            }
        };

        return j + 1;
    }
};