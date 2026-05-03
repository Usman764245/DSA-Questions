#include <iostream>
using namespace std;
void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void BubbleSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
        cout << endl;
    }
    print(arr, n);
}
void SelectionSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int miniindx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[miniindx])
            {
                miniindx = j;
            }
            swap(arr[i], arr[miniindx]);
        }
        cout << endl;
    }
    print(arr, n);
}
void InsertionSort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;
        while (prev >= 0 && arr[prev] > curr)
        {
            swap(arr[prev], arr[prev + 1]);
            prev--;
        }
        arr[prev + 1] = curr;
    }
    print(arr, n);
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
    int arr[] = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
    int n = 10;
    // BubbleSort(arr, n);
    // SelectionSort(arr, n);
    // InsertionSort(arr, n);
    // CountingSort(arr, n);

    return 0;
}