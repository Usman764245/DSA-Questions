// check if a number is 2 exponent or not
#include <iostream>
using namespace std;
bool checkexponent(int num)
{
    if (!(num & (num - 1)))
    {
        return true;
    }
    else
        return false;
}

int main()
{
    cout << checkexponent(4) << endl;
    cout << checkexponent(16) << endl;
    cout << checkexponent(13) << endl;

    cout << checkexponent(7);
    return 0;
}