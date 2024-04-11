// take an element and place it in its correct position
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr = {3, 1, 10, 8, 4, 1, 19, 25};

    for (int i = 0; i < arr.size() - 1; i++)
    {

        for (int j = i + 1; j >= 0; j--)
        {
            if (arr[j - 1] >= arr[j])
            {
                swap(arr[j - 1], arr[j]);
            }
        }
    };

    for (auto &element : arr)
    {
        cout << element << " ";
    }

    return 0;
}