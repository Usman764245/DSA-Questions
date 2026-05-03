#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 4, 6, 2, 9, 4, 11, 23};
    int n = sizeof(arr) / sizeof(int);
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "largest = " << max << endl;
    cout << "smallest = " << min << endl;
    return 0;
}