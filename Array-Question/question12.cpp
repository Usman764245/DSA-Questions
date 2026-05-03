#include <iostream>
using namespace std;
bool duplicate(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[] = {1, 2, 3, 3, 4, 5};
    int n = 6;
    cout << duplicate(arr, n);
    return 0;
}