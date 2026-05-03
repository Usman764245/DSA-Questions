#include <iostream>
using namespace std;
char nextchar(char ch)
{
    if (ch == 'z')
    {
        return 'a';
    }
    else
    {
        ch++;
    }

    return ch;
}
int main()
{
    cout << nextchar('e');
    return 0;
}