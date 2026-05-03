// assigment question 1
// clear ith bit position
#include <iostream>
using namespace std;
void clearithbit(int num, int i, int j)
{
    int bitmask = ~0 << (j + 1);
    int bitmask2 = 1 << (i - 1);
    int mask = bitmask | bitmask2;
    num = num & mask;
    cout << num << endl;
}
int main()
{
    clearithbit(15, 1, 3);
    return 0;
}