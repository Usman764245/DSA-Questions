//set  mismatch number 
// time complexity O(n)
#include <iostream>
#include <vector>
using namespace std;
vector<int> duplicate(vector<int> nums)
{
    int n = nums.size();
    vector<int> ans;
    vector<bool> ispresent(n + 1, false);
    for (int i = 0; i < n; i++)
    {
        if (ispresent[nums[i]] == true)
        {
            ans.push_back(nums[i]);
        }
        ispresent[nums[i]] = true;
    }
    for (int i = 1; i < ispresent.size(); i++)
    {
        if (ispresent[i] == false)
        {
            ans.push_back(i);
            break;
        }
    }
    return ans;
}
int main()
{
    vector<int> nums = {1, 2, 2, 4};
    vector<int> ans = duplicate(nums);
    cout << ans[0] << "," << ans[1] << endl;
}