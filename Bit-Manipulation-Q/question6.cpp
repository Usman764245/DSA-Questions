// clear ith bit
#include <iostream>
using namespace std;
int Clearith(int num, int i)
{
    int bitmask = ~(1 << i);
    return num & bitmask;
}
int main()
{
    cout << Clearith(15, 3);
    return 0;
}