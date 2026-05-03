// Binary search algorithms
// time complixity is O(log n)
// space complixity is O(1)
#include <iostream>
using namespace std;
int BinarySearch(int *arr, int n, int key)
{
    int st = 0;
    int end = n - 1;
    while (st <= end)
    {
        int mid = (st + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int n = sizeof(arr) / sizeof(int);
    cout << BinarySearch(arr, n, 122);
    return 0;
}