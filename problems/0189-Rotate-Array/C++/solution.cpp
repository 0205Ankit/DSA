class Solution
{

    void reverse(vector<int> &nums, int low, int high)
    {
        if (low < high)
        {
            // used to identify how many times a loop should run to reverse the array
            int middle = (high + low) / 2;

            for (int i = low; i <= middle; i++)
            {
                swap(nums[i], nums[(high + low) - i]);
            }
        }
    };

public:
    void rotate(vector<int> &nums, int k)
    {
        int n = nums.size() - 1;
        int l = k;
        if (k > nums.size())
        {
            l = k % nums.size();
        };

        reverse(nums, 0, n - l);
        reverse(nums, n - l + 1, n);
        reverse(nums, 0, n);
    }
};