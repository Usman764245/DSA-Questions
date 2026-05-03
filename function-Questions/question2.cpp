#include <iostream>
using namespace std;
bool oddeven(int num)
{
    if (num % 2 == 0)
    {
        return true;
    }
    return false;
}
int main()
{
    cout << oddeven(20);
    return 0;
}