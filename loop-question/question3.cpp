#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    cout << "enter a number : ";
    cin >> n;
    int s = n;
    while (n > 0)
    {
        int lastdigit = n % 10;
        sum = sum + (lastdigit * lastdigit * lastdigit);
        n = n / 10;
    }
    if (sum == s)
    {
        cout << "armstong number " << endl;
    }
    else
    {

        cout << "not armstong number " << endl;
    }
    return 0;
}