// increasing or deacreasing number in recursion
#include <iostream>
using namespace std;
void decreasing(int n)
{
    if (n == 0) // base case
    {
        return;
    }
    cout << n << " ";  // print number
    decreasing(n - 1); // call itself
}
int main()
{
    decreasing(5);
    return 0;
}