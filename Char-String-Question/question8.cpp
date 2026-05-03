// anagram question in string
// time complexity O(n)
#include <iostream>
#include <string.h>
#include <string>
using namespace std;
bool isanagram(string str1, string str2)
{
    if (str1.length() != str2.length())
    {
        cout << " invalid angaram";
        return false;
    }
    int count[26] = {0};
    for (int i = 0; i < str1.length(); i++)
    {
        int pos = str1[i] - 'a';
        count[pos]++;
    }
    for (int i = 0; i < str2.length(); i++)
    {
        int pos = str2[i] - 'a';
        if (count[pos] == 0)
        {
            cout << "not valid angrams" << endl;
            return false;
        }
        count[pos]--;
    }
    cout << "valid angrams" << endl;
    return true;
}
int main()
{
    string str1 = "cat";
    string str2 = "rac";
    isanagram(str1, str2);
    return 0;
}