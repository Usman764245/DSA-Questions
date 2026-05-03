// Selection Sort
// time complexity O(n^2)
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
void SelectionSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int Minindx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[Minindx])
            {
                Minindx = j;
            }
        }
        swap(arr[i], arr[Minindx]);
    }
    print(arr, n);
}
int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = 5;
    SelectionSort(arr, n);
    return 0;
}