/////  reversing an array using recursion

#include <bits/stdc++.h>
using namespace std;

vector<int> reverse(int i, vector<int> &arr)
{

    if (i >= arr.size() / 2)
        return arr;

    arr[i] = arr[i] + arr[arr.size() - 1 - i];
    arr[arr.size() - 1 - i] = arr[i] - arr[arr.size() - 1 - i];
    arr[i] = arr[i] - arr[arr.size() - 1 - i];

    return reverse(i + 1, arr);
};

int main()
{
    // Write C++ code here
    vector<int> arr = {1, 3, 7, 6, 9, 89};

    vector<int> reversed = reverse(0, arr);

    for (int i = 0; i < reversed.size(); i++)
    {
        cout << reversed[i] << ", ";
    };
    return 0;
}