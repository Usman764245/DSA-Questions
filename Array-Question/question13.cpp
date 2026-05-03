// is rotated questions in array
// time complexity O(log n)
// space complexity O(1)
#include <iostream>
#include <vector>
using namespace std;
int binaryrotatedSearch(vector<int> &arr, int target)
{
    int low = 0;
    int high = arr.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[low] <= arr[mid])
        {
            if (arr[low] <= target && target < arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else if (arr[mid] <= target && target < arr[high])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2, 3};
    cout << binaryrotatedSearch(arr, 0);
    return 0;
}