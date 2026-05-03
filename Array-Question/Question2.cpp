// time complexitry O(n)
// linear search 
#include <iostream>
using namespace std;
int linearSeasrch(int *arr, int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(int);
    cout << linearSeasrch(arr, n, 222);
    return 0;
}