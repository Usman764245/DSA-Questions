// cstring 
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // strcopy function
    char str1[1000];
    strcpy(str1, "hello");
    cout << str1 << endl;
    // strcat function
    char str[] = "hello ";
    char str1[] = "word";
    strcat(str, str1);
    cout << str << endl;
    // str compare function
    char str1[1000] = "xyz";
    char str2[1000] = "xyz";
    cout << strcmp(str1, str2) << endl;
    return 0;
}