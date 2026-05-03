// count set bit in a number
#include <iostream>
using namespace std;
void countsetbit(int num)
{
    int count = 0;
    while (num > 0)
    {
        int lastdigit = num & 1;
        count += lastdigit;
        num = num >> 1;
    }
    cout << count << endl;
}
int main()
{
    countsetbit(15);
    return 0;
}