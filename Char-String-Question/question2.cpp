// input character from keyboard
// using string function
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char ch[50];
    cin.getline(ch, 50, '.');
    cout << "your word was :  " << ch << endl;

    cout << " your length is : " << strlen(ch) << endl;
    return 0;
}