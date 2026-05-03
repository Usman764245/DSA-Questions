// 2D vector
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int sum = 0;
    vector<vector<int>> mat = {{1, 2, 3}, {4}, {5}};
    for (int i = 0; i < mat.size(); i++) // for rows
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            cout << mat[i][j] << " ";
            sum += mat[i][j];
        }
        cout << endl;
    }
    cout << sum << endl;
    return 0;
}