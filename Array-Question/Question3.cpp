// with extra space reversed time complexity O(n)
//  space complexity O(n)
#include <iostream>
using namespace std;
void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int copyarr[n];
    for (int i = 0; i < n; i++)
    {
        int j = n - i - 1;
        copyarr[j] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = copyarr[i];
    }
    print(arr, n);
    return 0;
}