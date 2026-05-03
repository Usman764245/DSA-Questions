// how to return value from function in dynamic memory
#include <iostream>
using namespace std;
int *func() // using dynamic function
{
    int *ptr = new int;
    *ptr = 200;
    return ptr;
}
int main()
{
    int *x = func(); // store anyother dynamic memory
    cout << *x << endl;
    return 0;
}