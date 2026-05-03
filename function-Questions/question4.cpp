#include <iostream>
using namespace std;
bool isprime(int num)
{

    if (num == 1)
    {
        return false;
    }
    for (int i = 2; i * i <= num; i++)
    {

        if (num % 2 == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    cout << isprime(4);

    return 0;
}