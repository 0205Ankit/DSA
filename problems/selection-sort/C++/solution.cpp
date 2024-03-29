#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr = {3, 12, 8, 4, 11, 1, 25};

    for (int i = 0; i <= arr.size() - 2; i++)
    {
        for (int j = i; j < arr.size(); j++)
        {
            if (arr[j] < arr[i])
            {
                swap(arr[i], arr[j]);
            };
        };
    };

    for (auto &element : arr)
    {
        cout << element << " ";
    };

    return 0;
}