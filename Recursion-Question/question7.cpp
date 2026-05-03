// last occurence in array in recursion
// using vector
#include <iostream>
#include <vector>
using namespace std;
int loccurence(vector<int> arr, int i, int target)
{
    if (i == arr.size()) // base case
    {
        return -1;
    }

    int idx = loccurence(arr, i + 1, target); // function call itself
    if (idx == -1 && arr[i] == target)        // if condition
    {
        return i;
    }
    return idx;
}
int main()
{
    vector<int> arr = {1, 2, 3, 3, 3, 4};
    int target = 3;
    cout << loccurence(arr, 0, target); // output 3
    return 0;
}