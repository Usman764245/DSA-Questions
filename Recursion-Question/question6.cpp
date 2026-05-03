// first occurence in array in recursion
// using vector
#include <iostream>
#include <vector>
using namespace std;
int foccurence(vector<int> arr, int i, int target)
{
    if (i == arr.size()) // base case
    {
        return -1;
    }
    if (arr[i] == target) // check condition
    {
        return i;
    }
    return foccurence(arr, i + 1, target); // function call itself
}
int main()
{
    vector<int> arr = {1, 2, 3, 3, 3, 4};
    int target = 3;
    cout << foccurence(arr, 0, target); // output 3
    return 0;
}