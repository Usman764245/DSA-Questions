// creating dynamic memory
// using func and delete it
#include <iostream>
using namespace std;
void fun()
{
    int size;
    cin >> size;
    int *arr = new int[size]; // creating memory in heap memory
    int x = 1;
    for (int i = 0; i < size; i++)
    {
        arr[i] = x;
        cout << arr[i] << " ";
        x++;
    }
    cout << endl;
    delete[] arr; // using delete freed memory
}
int main()
{
    fun();
    return 0;
}