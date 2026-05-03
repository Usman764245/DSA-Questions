// power x^n find in recursion
// time complexity O(log n)
#include <iostream>
using namespace std;
int power(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    int half = power(x, n / 2);
    int halfsqaure = half * half;
    if (n % 2 != 0)
    {
        return x * halfsqaure;
    }
    return halfsqaure;
}
int main()
{
    cout << power(2, 5) << endl;
    return 0;
}