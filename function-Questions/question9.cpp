#include <iostream>
using namespace std;
void largestnumber(int a, int b, int c)
{
    if (a >= b && a >= c)
    {
        cout << "laregest number is :" << a << endl;
    }
    else if (b >= c)
    {
        cout << "the largest number is : " << b << endl;
    }
    else
    {
        cout << "largest number is : " << c << endl;
    }
}
int main()
{
    largestnumber(344, 355, 46);
    return 0;
}