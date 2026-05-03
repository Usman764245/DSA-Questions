// reverse a char
// time complexity O(n)
#include <iostream>
#include <string.h>
using namespace std;
void reverse(char word[], int n)
{
    int st = 0;
    int end = n - 1;
    while (st <= end)
    {
        swap(word[st++], word[end--]);
    }
}
int main()
{
    char word[] = "usman";
    reverse(word, strlen(word));
    cout << word << endl;
    return 0;
}