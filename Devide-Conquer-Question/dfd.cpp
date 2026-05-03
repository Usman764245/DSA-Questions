#include <iostream>
#include <vector>
using namespace std;

// Use a global temporary vector to avoid repeated allocations
vector<int> temp; // Declare globally

long long merge(int *arr, int si, int mid, int ei)
{
    int i = si;
    int j = mid + 1;
    int k = 0; // Index for temp array
    long long invcount = 0;

    // Clear and resize temp to needed size
    temp.resize(ei - si + 1);

    while (i <= mid && j <= ei)
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
            invcount += (mid - i + 1);
        }
    }

    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }

    while (j <= ei)
    {
        temp[k++] = arr[j++];
    }

    // Copy back to original array
    for (int idx = si, x = 0; idx <= ei; idx++)
    {
        arr[idx] = temp[x++];
    }

    return invcount;
}

void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

long long mergesort(int *arr, int si, int ei)
{
    if (si >= ei)
    {
        return 0;
    }

    int mid = si + (ei - si) / 2; // Better to avoid overflow
    long long invcount = 0;

    invcount += mergesort(arr, si, mid);
    invcount += mergesort(arr, mid + 1, ei);
    invcount += merge(arr, si, mid, ei);

    return invcount;
}

int main()
{
    // Test cases
    int arr1[5] = {2, 4, 1, 3, 5};
    int n1 = 5;
    cout << "Array: ";
    print(arr1, n1);
    cout << "Inversion count: " << mergesort(arr1, 0, n1 - 1) << endl;
    cout << "Expected: 3" << endl
         << endl;

       return 0;
}