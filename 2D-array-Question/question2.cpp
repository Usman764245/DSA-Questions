// dignal sum Question
// time complexity O(n^2)
#include <iostream>
using namespace std;
void dignal(int arr[][4], int n, int m)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j)
            {
                sum += arr[i][j];
            }
            else if (j == n - i - 1)
            {
                sum += arr[i][j];
            }
        }
    }
    cout << sum;
}
// time complexity O(n)
void dignal2(int arr[][4], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i][i];
        if (i != n - i - 1)
        {
            sum += arr[i][n - i - 1];
        }
    }
    cout << sum << endl;
}
int main()
{
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};
    int n = 4, m = 4;
    dignal2(arr, n);
    return 0;
}