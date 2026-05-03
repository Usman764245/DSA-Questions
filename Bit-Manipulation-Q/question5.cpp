// set ith bit
#include <iostream>
using namespace std;
int set(int num, int i)
{
    int bitmask = 1 << i;
    num = (num | bitmask); // set bitmask
    return num;
}
int main()
{
    cout << set(6, 3);
    return 0;
}