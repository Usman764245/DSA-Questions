#include <iostream>
using namespace std;
void Binarytodeci(int n)
{
    int sum = 0;
    int deci = 1;
    int temp = n;
    while (temp > 0)
    {
        int lastdigit = temp % 2;
        sum += lastdigit * deci;
        deci = deci * 10;
        temp = temp / 2;
    }
    cout << sum << endl;
}
int main()
{
    Binarytodeci(10);
    return 0;
}