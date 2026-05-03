#include <iostream>
using namespace std;

int main()
{
    int a = 32;
    int *ptr = &a;
    char ch = 'A';
    char &echo = ch;
    echo += a;
    *ptr += ch;
    cout << a << " " << ch << endl;
    return 0;
}