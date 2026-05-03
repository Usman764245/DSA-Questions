// factorial in recursion
#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 0) // base case
    {
        return 1;
    }
    return n * factorial(n - 1); // function call itself
}
int main()
{
    cout << factorial(5) << endl;

    return 0;
}