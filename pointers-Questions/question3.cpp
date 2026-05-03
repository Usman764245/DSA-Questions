#include <iostream>
using namespace std;

int main()
{
    int *ptr;
    int x = 7;
    ptr = &x;
    cout << *ptr << endl;
    return 0;
}