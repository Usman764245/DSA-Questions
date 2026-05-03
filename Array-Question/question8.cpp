// print maxsubarray in optimized
// time complexity O(n2)
#include <iostream>
using namespace std;
void maxsubarray(int *arr, int n)
{
    int maximum = INT_MIN;
    for (int start = 0; start < n; start++)
    {
        int currentsum = 0;
        for (int end = start; end < n; end++)
        {
            currentsum += arr[end];
        }
        maximum = max(maximum, currentsum);
    }
    cout << "maximum value is = " << maximum;
}
int main()
{
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = 6;
    maxsubarray(arr, n);

    return 0;
}