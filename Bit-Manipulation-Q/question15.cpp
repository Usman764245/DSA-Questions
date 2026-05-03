#include <iostream>
using namespace std;
int clear(int num)
{
    int count = 0;
    while (num > 0)
    {
        int lastdigit = num & 1;
        count += lastdigit;
        num = num >> 1;
    }
    return count;
}
int main()
{
    cout << clear(15);
    return 0;
}