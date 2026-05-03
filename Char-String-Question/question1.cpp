// find any pos of char
#include <iostream>
using namespace std;

int main()
{
    // for small letter
    char ch = 'f';
    int pos = ch - 'a';
    cout << pos << endl;
    // for capital letter
    char ch = 'Z';
    int pos = ch - 'A';
    cout << pos << endl;
    return 0;
}