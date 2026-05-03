// pair sum question in vector
// time complexity O(n^2)
// brute force method
#include <iostream>
#include <vector>
using namespace std;

int pairsum(vector<int> arr, int n)
{
    int target = 2;

    for (int st = 0; st < n; st++)
    {
        int sum = 0;
        for (int end = st; end < n; end++)
        {
            sum += arr[end];
            if (sum == target)
            {
                cout << "(" << st << "," << end << ")";
                break;
            }
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {2, 5, 8, 10, 14};
    int n = arr.size();

    pairsum(arr, n);
    return 0;
}