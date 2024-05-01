#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int pivotFunction(vector<int> &arr, int low, int high)
{

    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < high || j > low)
    {
        if (arr[i] <= pivot)
        {
            i++;
        };
        if (arr[j] > pivot)
        {
            j--;
        };

        if (i > j)
        {
            swap(arr[j], arr[low]);
            pivot = j;
            break;
        }
        else
        {
            swap(arr[j], arr[i]);
        };
    };

    return j;
}

void qs(vector<int> &arr, int low, int high)
{
    if (low >= high)
        return;
    int pivotIndex = pivotFunction(arr, low, high);

    qs(arr, low, pivotIndex - 1);
    qs(arr, pivotIndex + 1, high);
}

int main()
{

    vector<int> arr = {64, 87, 3, 8, 1, 4, 89, 5, 1, 14, 11, 8};
    int low = 0;
    int high = arr.size() - 1;

    qs(arr, low, high);

    /// the arr gets sorted and in ascending order
    for (auto &element : arr)
    {
        cout << element << " ";
    }

    return 0;
}