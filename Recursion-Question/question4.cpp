// fabonancii searies in recursion
#include <iostream>
using namespace std;
int Fabonancii(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return Fabonancii(n - 1) + Fabonancii(n - 2);
}
int main()
{
    cout << Fabonancii(6) << endl;
    return 0;
}