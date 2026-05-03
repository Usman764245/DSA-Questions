// duplicate remove from string
#include <iostream>
#include <string>
using namespace std;
void duplicate(string s1, string ans, int map[26])
{
    for (int i = 0; i < s1.length(); i++)
    {
        char ch = s1[i];
        int indx = (int)(ch - 'a');
        if (map[indx] == false)
        {
            ans = ans + s1[i];
        }

        map[indx] = true;
    }
    cout << ans << endl;
}
int main()
{
    string s1 = "uuusssmmmaannn";
    string s2 = "";
    int map[26] = {false};
    duplicate(s1, s2, map);
    return 0;
}