// time complexity is O(n + m)
 
#include <iostream>
using namespace std;
bool issearch(int arr[][4], int n, int m, int target)
{
    int i = 0;
    int j = n - 1;
    while (i < n && j >= 0)
    {
        if (arr[i][j] == target)
        {
            cout << "cell found at: (" << i << ", " << j << ")" << endl;

            return true;
        }
        else if (arr[i][j] > target)
        {
            j--;
        }
        else
            i++;
    }
    cout << "cell not foound " << endl;
    return false;
}
int main()
{
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};
    cout << issearch(arr, 4, 4, 19);
    return 0;
}