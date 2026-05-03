// Quick sort algorithm
// time complexity O(n log n)
// but varoius situation O(n^2)
// space complexity  O(1)
#include <iostream>
using namespace std;
int partion(int *arr, int si, int ei)
{
    int i = si - 1;
    int pivot = arr[ei];
    for (int j = si; j < ei; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    i++;
    swap(arr[i], arr[ei]);
    return i;
}
void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void QuickSort(int *arr, int si, int ei)
{
    if (si >= ei)
    {
        return;
    }
    int pivotIndx = partion(arr, si, ei);
    QuickSort(arr, si, pivotIndx - 1);
    QuickSort(arr, pivotIndx + 1, ei);
}
int main()
{
    int arr[6] = {6, 3, 7, 5, 2, 4};
    int n = 6;
    QuickSort(arr, 0, n - 1);
    print(arr, n);
    return 0;
}