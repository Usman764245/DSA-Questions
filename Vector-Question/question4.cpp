// 2D Dynamic array
// possiable only make pointers array

#include <iostream>
using namespace std;

int main()
{
    int rows;
    int cols;
    cout << "enter a rows : ";
    cin >> rows;
    cout << "enter a cols : ";
    cin >> cols;

    int **mat = new int *[rows];// intgers  pointers array
    for (int i = 0; i < rows; i++)
    {
        mat[i] = new int[cols]; // assign cloums any pointers array
    }
    int x = 1;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            mat[i][j] = x++;
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}