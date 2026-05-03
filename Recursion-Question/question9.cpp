// tiling problem
// time complexity O(n)
#include <iostream>
using namespace std;
int tiling(int n) // 2 x N floor
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    int ans1 = tiling(n - 1); // vertical
    int ans2 = tiling(n - 2); // horizantal 
    return ans1 + ans2;
}
int main()
{
    int n = 4;
    cout << tiling(n) << endl;
    return 0;
}