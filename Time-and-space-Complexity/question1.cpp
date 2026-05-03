#include <iostream>
using namespace std;
// predict time complexity
int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)// n times run
    {
        for (int j = 0; j < n; j++)// n times run
        {
            cout << "*" << endl; // k constant work
        }

        // time complexity O(n^2)
    }
    return 0;
}