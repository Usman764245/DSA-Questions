// Counting Sort 
// time complexity O(n^2) 
// if range is vary small then time complexirty is O(n)
#include <iostream>
using namespace std;
void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void CountingSort(int *arr, int n)
{
    int freq[10000] = {0};
    int maxval = INT_MIN;
    int minval = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
        maxval = max(maxval, arr[i]);
        minval = min(minval, arr[i]);
    }
    for (int i = minval, j = 0; i <= maxval; i++)
    {
        while (freq[i] > 0)
        {
            arr[j++] = i;
            freq[i]--;
        }
    }
    print(arr, n);
}
int main()
{
    int arr[] = {3, 3, 2, 2, 1, 1};
    int n = 6;
    CountingSort(arr, n);
    return 0;
}