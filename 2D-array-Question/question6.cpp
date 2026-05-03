// transpose 2D array  matrix
#include <iostream>
using namespace std;
void trans(int arr[][3], int n, int m)
{
    int transpose[n][m] = {{0}};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            transpose[i][j] = arr[j][i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n = 3;
    int m = 3;
    trans(matrix, n, m);
    return 0;
}