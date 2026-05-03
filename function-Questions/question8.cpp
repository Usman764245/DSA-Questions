#include <iostream>
using namespace std;
int func(int a, int b)
{
    return a ^ 2 + b ^ 2 + 2 * a * b;
}
int main()
{

    cout << func(2, 3);
    return 0;
}