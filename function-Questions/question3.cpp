#include <iostream>
using namespace std;
void fact(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    cout << fact << endl;
}
int main()
{
    fact(5);
    return 0;
}