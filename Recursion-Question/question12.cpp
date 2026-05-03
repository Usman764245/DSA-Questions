// binary string problem
// using recursion
#include <iostream>
#include <string>
using namespace std;
void Binarystring(int n, int place, string ans)
{
    if (n == 0)
    {
        cout << ans << endl;
        return;
    }
    if (place != 1)
    {
        Binarystring(n - 1, 0, ans + '0');
        Binarystring(n - 1, 1, ans + '1');
    }
    else
        Binarystring(n - 1, 0, ans + '0');
}
int main()
{
    string ans = "";
    Binarystring(3, 0, ans);
    return 0;
}