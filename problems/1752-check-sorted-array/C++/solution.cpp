class Solution
{
public:
    bool check(vector<int> &nums)
    {
        int cnt = 0;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] > nums[i + 1])
            {
                cnt++;
            }
        };

        if (cnt == 1 && nums[0] > nums[nums.size() - 1])
        {
            return false;
        }
        if (cnt == 0)
            return true;
        return false;
    }
};