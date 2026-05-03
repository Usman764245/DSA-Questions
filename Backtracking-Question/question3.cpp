// find permutation
// using recurssion and backtracking
// tc = O(n!) sp = O(n)
#include <iostream>
#include <vector>
#include <string>
using namespace std;
void permutationstring(string str, string ans)
{
    int n = str.size();
    if (n == 0)
    {
        cout << ans << endl;
    }
    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        string newstr = str.substr(0, i) + str.substr(i + 1, n - i - 1);
        permutationstring(newstr, ans + ch);
    }
}
int main()
{
    string str = "abc";
    string ans = "";
    permutationstring(str, ans);

    return 0;
}