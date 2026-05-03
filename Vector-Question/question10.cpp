#include <iostream>
#include <vector>
using namespace std;
int maxwater(vector<int> &height)
{
    int left = 0;
    int right = height.size() - 1;
    int maxarea = 0;
    while (left < right)
    {
        int currentarea = min(height[left], height[right]) * (right - left);
        maxarea = max(maxarea, currentarea);
        if (height[left] < height[right])
        {
            left++;
        }
        else
            right--;
    }
    return maxarea;
}
int main()
{
    vector<int> hieght = {1, 8, 6, 2, 4, 5, 8, 3, 7};
    cout << maxwater(hieght) << endl;
    return 0;
}