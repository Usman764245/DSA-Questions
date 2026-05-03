// merge sort in recursion
// time complexity O(n log n)
// space complexity O(n)
#include <iostream>
#include <vector>
using namespace std;
long long merge(int *arr, int si, int mid, int ei)
{

    int i = si;
    int j = mid + 1;
    long long invcount = 0;
    int k = 0;

    vector<int> temp;
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

    for (int indx = si, x = 0; indx <= ei; indx++)
    {
        arr[indx] = temp[x++];
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
    long long invcount = 0;
    int mid = si + (ei - si) / 2;
    invcount += mergesort(arr, si, mid);     // for left
    invcount += mergesort(arr, mid + 1, ei); // for right
    invcount += merge(arr, si, mid, ei);
    return invcount;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    cout << mergesort(arr, 0, n - 1) << endl;

    return 0;
}