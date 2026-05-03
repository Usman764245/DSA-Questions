#include <iostream>
using namespace std;
void change(int &a, int &b, int &c)
{
    a *= 2;
    b *= 2;
    c *= 2;
}
int main()
{
    int x = 1;
    int y = 2;
    int z = 3;
    change(x, y, z);
    cout << x << " " << y << " " << z << endl;
    return 0;
}