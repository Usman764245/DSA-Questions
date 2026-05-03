// creating dynamic memory
// runtime size allocated

#include <iostream>
using namespace std;

int main()
{
    int size;
    cin >> size;
    // using new keyword for creating dynamic memory
    int *ptr = new int[size];
    int x = 1;
    for (int i = 0; i < size; i++)
    {
        ptr[i] = x;
        cout << ptr[i] << " ";
        x++;
    }
    return 0;
}
