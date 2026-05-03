// Bubble sort algorithm
// time complixity O(n^2)
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
      
    }

    print(arr, n);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    BubbleSort(arr, n);
    return 0;
}