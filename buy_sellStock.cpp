#include <iostream>
using namespace std;
int main()
{
    int arr[] = {9, 2, 1, 4, 3, 5, 6};
    int bestbuy = arr[0];
    int maxprofit = 0;
    int n = 7;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > bestbuy)
        {
            maxprofit = max(maxprofit, arr[i] - bestbuy);
        }
        bestbuy = min(bestbuy, arr[i]);
    }
    cout<< "bestprofit =" << maxprofit << endl;

    return 0;
}