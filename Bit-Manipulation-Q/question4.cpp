// get ith bit
#include <iostream>
using namespace std;
int get(int num, int i)
{
    int bitmask = 1 << i; // set bitmask
    if (!(num & bitmask))
    {
        return 0;
    }
    else
        return 1;
}
int main()
{
    cout << get(15, 3);
    return 0;
}