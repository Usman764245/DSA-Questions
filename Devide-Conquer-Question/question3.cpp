// isrotated binary search
// time complexity O(log n)
#include <iostream>
using namespace std;
int searchRotated(int *arr, int target, int si, int ei)
{
    int mid = si + (ei - ei) / 2;
    if (si > ei)
    {
        return -1;
    }
    if (arr[mid] == target)
    {
        return mid;
    }
    if (arr[si] <= arr[mid])
    {
        // L1
        if (arr[si] < target && target < arr[mid])
        {
            return searchRotated(arr, target, si, mid - 1);
        }
        else
        {
            return searchRotated(arr, target, mid + 1, ei);
        }
    }
    else // L2
    {
        if (arr[mid] < target && target < arr[ei])
        {
            return searchRotated(arr, target, mid + 1, ei);
        }

        else
        {
            return searchRotated(arr, target, si, mid - 1);
        }
    }
}
int main()
{
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    int n = 7;
    cout << searchRotated(arr, target, 0, n - 1);
    return 0;
}