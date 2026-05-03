#include <iostream>
using namespace std;

int main()
{
    int lastdigit;
    for (int i = 1; i <= 200; i++)
    {
        int original = i;
        int sum = 0;
        int temp = i;

        while (temp > 0)
        {
            lastdigit = temp % 10;
            sum = sum + (lastdigit * lastdigit * lastdigit);
            temp = temp / 10;
        }
        if (sum == original)
        {
            cout << original << " ";
        }
    }
}