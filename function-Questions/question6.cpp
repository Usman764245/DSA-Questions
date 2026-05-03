#include <iostream>
using namespace std;
void palindrome(int num)
{
    int original = num;
    int sum = 0;
    int lastdigit;
    while (num > 0)
    {
        lastdigit = num % 10;
        sum = lastdigit + (sum * 10);
        num = num / 10;
    }
    if (sum == original)
    {
        cout << "palindrome number ";
    }
    else
        cout << " not palindrome number";
}
int main()
{
    palindrome(123);

    return 0;
}