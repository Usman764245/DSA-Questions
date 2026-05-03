// assigment question
// print all occurence in recursion
#include <iostream>
#include <vector>
using namespace std;
void alloccurence(vector<int> arr, int i, int k)
{

    if (i == arr.size())
    {
        return;
    }
    if (arr[i] == k)
    {
        cout << i << " ";
    }
    alloccurence(arr, i + 1, k);
}
int main()
{
    vector<int> arr = {1, 2, 1, 2, 1, 2, 1, 2, 1};
    int key = 2;
    alloccurence(arr, 0, key);

    return 0;
}
