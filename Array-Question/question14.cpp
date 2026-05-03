// print maxsubarray product question
// O(n)
#include <iostream>
#include <vector>
using namespace std;
int product(vector<int> &arr)
{
    int maxtill = arr[0];
    int mintill = arr[0];
    int ans = maxtill;
    for (int i = 1; i < arr.size(); i++)
    {
        int curr = arr[i];
        int tempmaxtill = max(curr, max(maxtill * curr, mintill * curr));
        mintill = min(curr, min(maxtill * curr, mintill * curr));
        maxtill = tempmaxtill;
        ans = max(ans, maxtill);
    }
    return ans;
}
int main()
{
    vector<int> arr = {2, 3, -2, 4};
    cout << product(arr);
    return 0;
}