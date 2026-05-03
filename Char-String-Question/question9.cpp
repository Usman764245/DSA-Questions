// count lowercase
#include <iostream>
#include <string>
using namespace std;
void counting(string str)
{
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        if (ch >= 'A' && ch <= 'Z')
        {
            continue;
        }
        else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            count++;
        }
        else
            continue;
    }
    cout << count << endl;
}
int main()
{
    string str = "usman";
    counting(str);
    return 0;
}