// water trapping question leetcode
#include <iostream>
using namespace std;
void trap(int *hieght, int n)
{
    int leftmax[20000];
    int rightmax[20000];
    leftmax[0] = hieght[0];
    rightmax[n - 1] = hieght[n - 1];

    for (int i = 1; i < n; i++)
    {
        leftmax[i] = max(leftmax[i - 1], hieght[i - 1]);
    }
    for (int i = n - 2; i >= 0; i--)
    {
        rightmax[i] = max(rightmax[i + 1], hieght[i + 1]);
    }
    int Watertrapped = 0;
    for (int i = 0; i < n; i++)
    {
        int currentwater = min(leftmax[i], rightmax[i]) - hieght[i];
        if (currentwater > 0)
        {
            Watertrapped += currentwater;
        }
    }
    cout << "water trapped is = " << Watertrapped;
}
int main()
{
    int hieght[] = {4, 2, 0, 6, 3, 2, 5};
    int n = 7;
    trap(hieght, n);

    return 0;
}