// xor beauty assigment question
#include <iostream>
#include <vector>
using namespace std;
int xorbeauty(vector<int> &nums)
{
    int a = 0;
    int b = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        a ^= nums[i];
        b ^= nums[i];
    }
    return (a & b);
}
int main()
{
    vector<int> arr = {15, 45, 20, 2, 34, 35, 5, 44, 32, 30};
    cout << xorbeauty(arr);
    return 0;
}