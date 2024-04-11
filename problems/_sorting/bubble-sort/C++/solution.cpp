// Push the maximum to last by adjacent swaps
// NOTE: can also be done using 2 loops like the solution of selection sort instead of using recursion
#include <bits/stdc++.h>
using namespace std;

vector<int> bubbleSort(vector<int> arr, int iteration)
{

    if (iteration > arr.size() - 2)
        return arr;

    for (int i = 0; i <= arr.size() - 2; i++)
    {
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    };

    return bubbleSort(arr, iteration + 1);
}

int main()
{
    // Write C++ code here

    vector<int> arr = {3, 12, 8, 4, 11, 1, 25};

    vector<int> sortedArr = bubbleSort(arr, 0);

    for (auto &element : sortedArr)
        cout << element << " ";

    return 0;
}
