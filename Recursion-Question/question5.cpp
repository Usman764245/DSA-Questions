// array is sorted or not in recursion
#include <iostream>
using namespace std;
bool issorted(int *arr, int n, int i)
{
    if (i == n - 1)
    {
        return true;
    }
    if (arr[i] > arr[i + 1])
    {
        return false;
    }
    return issorted(arr, n, i + 1);
}
int main()
{
    int arr[] = {1, 4, 5, 3, 5};  // not sorted
    int arr2[] = {1, 2, 3, 4, 5}; // sorted
    int n = 5;
    cout << issorted(arr, n, 0);
    return 0;
}