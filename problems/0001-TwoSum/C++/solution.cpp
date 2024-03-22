// brute force with time complexity of O(n^2)
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                    return {i, j};
            }
        }

        return {};
    }
};

// better solution using hashmap
// NOTE: In C++, when map.find() is called and the specified key is not found in the map, it returns an iterator pointing to the element past the last element in the container (i.e., map.end()). This iterator serves as a signal that the element is not present in the map.
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> mpp;
        for (int i = 0; i < nums.size(); i++)
        {
            if (mpp.find(target - nums[i]) != mpp.end())
            {
                return {mpp[target - nums[i]], i};
            }
            mpp[nums[i]] = i;
        }

        return {};
    }
};