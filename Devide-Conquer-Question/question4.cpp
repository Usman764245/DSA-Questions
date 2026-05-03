// assigment wuestion
// string merge sort
// time complexity O(n)
#include <iostream>
#include <vector>
#include <string>
using namespace std;
void merge(vector<string> &arr, int mid, int si, int ei)
{
    vector<string> temp;
    int i = si;
    int j = mid + 1;
    while (i <= mid && j <= ei)
    {

        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i++]);
        }
        else
            temp.push_back(arr[j++]);
    }
    while (i <= mid)
    {
        temp.push_back(arr[i++]);
    }
    while (j <= ei)
    {
        temp.push_back(arr[j++]);
    }
    for (int indx = si, x = 0; indx <= ei; indx++)
    {
        arr[indx] = temp[x++];
    }
}
void print(vector<string> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
void mergesort(vector<string> &arr, int si, int ei)
{
    if (si >= ei)
    {
        return;
    }
    int mid = si + (ei - si) / 2;
    mergesort(arr, si, mid);
    mergesort(arr, mid + 1, ei);
    merge(arr, mid, si, ei);
}
int main()
{
    vector<string> arr = {"sun", "earth", "mars", "mercury"};

    int ei = arr.size() - 1;
    mergesort(arr, 0, ei);
    print(arr);
    return 0;
}