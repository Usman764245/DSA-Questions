#include <iostream>
using namespace std;

int main()
{
    int k = 5;
    int n = 1;
    for (int i = 0; i < n; i + k) // n times run but jump k time
    {
        for (int j = 0; j <= k; j++) // k times run
        {
            // constant work
        }
        // final time complexity O(n)
    }
    return 0;
}