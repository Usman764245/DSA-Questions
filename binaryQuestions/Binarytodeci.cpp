#include <iostream>
using namespace std;
void Binarytodeci(int n)
{
    int sum = 0;
    int deci = 1;
    int temp = n;
    while (temp > 0)
    {
        int lastdigit = temp % 10;
        sum += lastdigit * deci;
        deci = deci * 2;
        temp = temp / 10;
    }
    cout << sum << endl;
}
int main()
{
    Binarytodeci(111);
    return 0;
}