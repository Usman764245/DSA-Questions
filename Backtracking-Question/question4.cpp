// N Queen chessboard question
// time complexity= O(n!) sp = O(n)
#include <iostream>
#include <vector>
using namespace std;
int print(vector<vector<char>> board)
{
    int n = board.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << "----------------------------\n";
    return 0;
}
bool issafe(vector<vector<char>> board, int row, int col)
{
    int n = board.size();
    for (int i = 0; i < n; i++)
    {
        if (board[row][col] == 'Q')
        {
            return false;
        }
    }
    for (int i = 0; i < row; i++)
    {
        if (board[i][col] == 'Q')
        {
            return false;
        }
    }
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
    }
    for (int i = row, j = col; i >= 0 && j < n; i--, j++)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
    }
    return true;
}
int isQueen(vector<vector<char>> &board, int row)
{
    int n = board.size();

    if (row == n)
    {
        print(board);
        return 1;
    }
    int count = 0;
    for (int j = 0; j < n; j++)
    {
        if (issafe(board, row, j))
        {
            board[row][j] = 'Q';
            count += isQueen(board, row + 1);

            board[row][j] = '.';
        }
    }
    return count;
}
int main()
{
    vector<vector<char>> board;
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        vector<char> newrow;
        for (int j = 0; j < n; j++)
        {
            newrow.push_back('.');
        }
        board.push_back(newrow);
    }
    int count = isQueen(board, 0);
    cout << " count : " << count;

    return 0;
}