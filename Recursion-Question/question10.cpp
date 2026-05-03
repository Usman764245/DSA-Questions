// remove duplicate using recursion
#include <iostream>
#include <string>
using namespace std;
void Removeduplicate(string str, string ans, int i, int map[26])
{
    if (i == str.size()) // base case
    {
        cout << "ans : " << ans << endl;
        return;
    }
    int mapindx = (int)(str[i] - 'a'); // find character index
    if (map[mapindx])
    {
        Removeduplicate(str, ans, i + 1, map); // not doplicate
    }
    else
    {
        map[mapindx] = true;
        Removeduplicate(str, ans + str[i], i + 1, map); // remove duplicate
    }
}

int main()
{
    string str = "aaabbcc";
    string ans = "";
    int map[26] = {false};
    Removeduplicate(str, ans, 0, map);
    return 0;
}