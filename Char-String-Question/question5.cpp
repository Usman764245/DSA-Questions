// valid palndrome
// time complexity O(n)
#include <iostream>
#include <string.h>
using namespace std;
bool isvalidpalindrome(char str[], int n)
{
    int st = 0;
    int end = n - 1;
    while (st < end)
    {
        if (str[st++] != str[end--])
        {
            cout << "not valid palindome" << endl;

            return false;
        }
    }
    cout << "valid palindrome" << endl;
    return true;
}
int main()
{
    char str[] = "usman";
    isvalidpalindrome(str, strlen(str));
    return 0;
}