// count any digit in  2D array
#include <iostream>
using namespace std;
void iscount(int mat[][3], int n, int m)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] == 7)
            {
                count++;
            }
        }
    }
    cout << count << endl;
}
int main()
{
    int mat[2][3] = {{7, 7, 7}, {8, 8, 7}};
    int n = 2;
    int m = 3;
    iscount(mat, n, m);
    return 0;
}