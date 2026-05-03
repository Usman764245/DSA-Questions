#include <iostream>
using namespace std;
void checkdigit(long int num)
{
    int count = 0;

    while (num > 0)
    {
        int lastdigit = num % 10;
        count++;
        num = num / 10;
    }
    cout << count << endl;
}
int main()
{
    checkdigit(1234567810);
    return 0;
}