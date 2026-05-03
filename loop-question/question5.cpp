#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    int b = 1;
    int c;
    int n;
    cout << "enter a number : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}