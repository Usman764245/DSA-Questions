// clear ith bit question
#include <iostream>
using namespace std;
void cleariTH(int num, int i)
{
    int bitmask = ~0 << i;
    num = num & bitmask;

    cout << num << endl;
}
int main()
{
    cleariTH(15, 1);
    return 0;
}