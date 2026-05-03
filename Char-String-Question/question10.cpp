// time complexirty O(n)
// string questions
#include <iostream>
#include <string>

using namespace std;
bool isaqual(string str1, string str2)
{
    if (str1.length() != str2.length())
    {
        return false;
    }
    char diff1;
    char diff2;
    int count = 0;
    for (int i = 0; i < str1.length(); i++)
    {
        if (str1[i] != str2[i])
        {
            if (count == 0)
            {
                diff1 = str1[i];
                diff2 = str2[i];
                count++;
            }
            else if (str1[i] != diff2 || str2[i] != diff1)
            {
                return false;
            }
            else
                count++;
        }

        if (count > 2)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string str1 = "abcd";
    string str2 = "dbca";
    cout << isaqual(str1, str2);
    return 0;
}