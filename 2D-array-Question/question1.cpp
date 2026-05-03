// spiral matrix question
#include <iostream>
using namespace std;
void spiral(int arr[][4], int n, int m)
{
    int srow = 0;
    int scol = 0;
    int erow = n - 1;
    int ecol = m - 1;
    while (srow <= erow && scol <= ecol)
    {
        // top
        for (int j = scol; j <= ecol; j++)
        {
            cout << arr[srow][j] << " ";
        }
        // right
        if (srow == erow)
        {
            break;
        }
        for (int i = srow + 1; i <= erow; i++)
        {
            cout << arr[i][ecol] << " ";
        }
        if (scol == ecol)
        {
            break;
        }
        // bottom
        for (int j = ecol - 1; j >= scol; j--)
        {
            cout << arr[erow][j] << " ";
        }
        // left
        for (int i = erow - 1; i >= srow + 1; i--)
        {
            cout << arr[i][scol] << " ";
        }
        srow++;
        scol++;
        erow--;
        ecol--;
    }
}
int main()
{
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};
    int n = 3;
    int m = 4;
    spiral(arr, n, m);
    return 0;
}