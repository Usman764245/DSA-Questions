// find any rows sum in 2D array
#include <iostream>
using namespace std;
void issum(int arr[][3], int n, int m)
{
    int sum = 0;

    for (int j = 0; j < m; j++)
    {
        sum += arr[1][j];
    }
    cout << sum << endl;
}

int main()
{
    int mat[3][3] = {{7, 7, 7}, {1, 2, 3}, {2, 3, 5}};
    int n = 3;
    int m = 3;
    issum(mat, n, m);
    return 0;
}