#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int middle, int high)
{
    vector<int> arrBuffer;

    int left = low;
    int right = middle + 1;

    while (left <= middle && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            arrBuffer.push_back(arr[left]);
            left++;
        }
        else
        {
            arrBuffer.push_back(arr[right]);
            right++;
        };
    };

    while (left <= middle)
    {
        arrBuffer.push_back(arr[left]);
        left++;
    };

    while (right <= high)
    {
        arrBuffer.push_back(arr[right]);
        right++;
    };

    for (int i = low; i <= high; i++)
    {
        arr[i] = arrBuffer[i - low];
    };
}

void mergeSort(vector<int> &arr, int low, int high)
{
    if (low == high)
        return;
    int middle = (low + high) / 2;

    mergeSort(arr, low, middle);
    mergeSort(arr, middle + 1, high);
    merge(arr, low, middle, high);
}

int main()
{

    vector<int> arr = {3, 1, 10, 8, 4, 1, 19, 25};
    int low = 0;
    int high = arr.size() - 1;

    mergeSort(arr, low, high);

    //// the arr get sorted in ascending order
    for (auto &element : arr)
    {
        cout << element << " ";
    }

    return 0;
}