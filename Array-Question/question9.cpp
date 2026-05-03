// Kaden's algorithm
// time complexity O(n)
#include <iostream>
using namespace std;
void maxsubarray(int *arr, int n)
{
    int maximum = INT_MIN;
    int currentsum = 0;
    for (int i = 0; i < n; i++)
    {
        currentsum += arr[i];
        maximum = max(maximum, currentsum);
        if (currentsum < 0)
        {
            currentsum = 0;
        }
    }
    cout << "maximum value is = " << currentsum << endl;
}
int main()
{
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = 6;
    maxsubarray(arr, n);
    return 0;
}