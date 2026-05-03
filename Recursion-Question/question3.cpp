// culculate n natural number in recursion
#include <iostream>
using namespace std;
int Natural(int n)
{

    if (n == 1) // base case
    {
        return 1;
    }
    return n + Natural(n - 1); // call itself
}
int main()
{
    cout << Natural(5);
    return 0;
}