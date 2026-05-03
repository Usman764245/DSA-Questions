// frtiend paireing problem solve using recursion
#include <iostream>
using namespace std;
int pairedProblem(int n)
{
    if (n == 1 || n == 2)
    {
        return n;
    }
    return pairedProblem(n - 1) + (n - 1) * pairedProblem(n - 2);
}
int main()
{
    cout << pairedProblem(4) << endl;

    return 0;
}