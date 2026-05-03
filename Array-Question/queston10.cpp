// sell and buy question
// time complexity O(n)
#include <iostream>
using namespace std;
void besbuy(int *prices, int n)
{
    int bestbuy[100000];
    bestbuy[0] = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        bestbuy[i] = min(bestbuy[i - 1], prices[i - 1]);
    }
    int Maxprofit = 0;
    for (int i = 0; i < n; i++)
    {
        int Currentprofit = prices[i] - bestbuy[i];
        Maxprofit = max(Maxprofit, Currentprofit);
    }
    cout << "max prifit is  = " << Maxprofit << endl;
}
int main()
{
    int prices[] = {15, 30, 35, 20, 41};
    int n = 5;
    besbuy(prices, n);
    return 0;
}