#include <iostream>
using namespace std;
bool isprime(int n)
{

    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            return false;
            break;
        }
    }
    return true;
}
void primeall(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (isprime(i))
        {
            cout << i << " ";
        }
    }
}
int main()
{
    primeall(20);
    return 0;
}