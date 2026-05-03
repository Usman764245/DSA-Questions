// assigment question
// binary search in recursion
// time complexity O(n)
#include <iostream>
using namespace std;
int binary(int *arr, int n, int target, int left, int right)
{
    if (left > right)
    {
        return -1;
    }
    int mid = (left + right) / 2;
    if (arr[mid] == target)
    {
        return mid;
    }
    else if (target > arr[mid])
    {
        return binary(arr, n, target, mid + 1, right);
    }
    else
        return binary(arr, n, target, left, mid - 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int target = 5;
    int n = 7;
    int left = 0;
    int right = n - 1;
    cout << binary(arr, n, target, left, right);
    return 0;
}