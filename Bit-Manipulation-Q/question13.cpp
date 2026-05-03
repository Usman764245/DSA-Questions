// find twice element in array
// time complexity O(n)
#include <iostream>
#include <vector>
using namespace std;
int twice(vector<int> arr)
{
    int resualt = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        resualt ^= arr[i];
    }
    return resualt;
}
int main()
{
    vector<int> arr = {4, 1, 2, 1, 2};
    cout << twice(arr) << endl;
    return 0;
}
