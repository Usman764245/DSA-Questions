// odd even using bit manipulation
#include <iostream>
using namespace std;
void OddOrEven(int num)
{
    if (!(num & 1))
    {
        cout << "even" << endl;
    }
    else
        cout << "odd" << endl;
}
int main()
{
    OddOrEven(13);

    return 0;
}