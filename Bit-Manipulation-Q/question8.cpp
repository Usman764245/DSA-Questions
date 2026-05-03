// update ith bit Question
#include <iostream>
using namespace std;
void updateith(int num, int i, int val)
{
    num = num & ~(1 << i);
    num = num | (val << i);

    cout << num << endl;
}
int main()
{
    updateith(7, 2, 0);
    updateith(7, 3, 1);
    return 0;
}