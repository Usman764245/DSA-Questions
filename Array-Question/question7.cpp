// print subarraymax in c++
//  time complexity O(n3)
//
#include <iostream>
using namespace std;
void subarray(int *arr, int n)
{
    int maximum = INT_MIN;
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            int currentsum = 0;
            for (int i = start; i <= end; i++)
            {
                currentsum += arr[i];
            }
            cout << currentsum << ", ";
            maximum = max(maximum, currentsum);
        }
        cout << endl;
       
    }
    cout << "maximum subarray value is : " << maximum;
}

int main()
{
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = 6;
    subarray(arr, n);
    return 0;
}