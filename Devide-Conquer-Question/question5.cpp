// mejority element print
// time complexity O(log n)
// space complexity O(n)
#include <iostream>
#include <vector>
using namespace std;
void merge(int *arr, int si, int mid, int ei)
{
    vector<int> temp;
    int i = si;
    int j = mid + 1;
    while (i <= mid && j <= ei)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i++]);
        }
        else
            temp.push_back(arr[j++]);
    }
    while (i <= mid)
    {
        temp.push_back(arr[i++]);
    }
    while (j <= ei)
    {
        temp.push_back(arr[j++]);
    }

    for (int indx = si, x = 0; indx <= ei; indx++)
    {
        arr[indx] = temp[x++];
    }
}
void print(int *arr, int n)
{

    cout << "majority element is : " << arr[n / 2] << endl;
}

void mergesort(int *arr, int si, int ei)
{
    int mid = (si + ei) / 2;
    if (si >= ei)
    {
        return;
    }
    mergesort(arr, si, mid);     // for left
    mergesort(arr, mid + 1, ei); // for right
    merge(arr, si, mid, ei);
}

int main()
{
    int arr[6] = {2, 2, 2, 2, 3, 3};
    int n = 6;
    mergesort(arr, 0, n - 1);
    print(arr, n);
    return 0;
}