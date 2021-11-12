#include <bits/stdc++.h>
using namespace std;
void buyAndSellStock(int arr[], int n)
{
    if (n == 1)
        return;
    int i = 0;
    while (i < n - 1)
    {
        while (i < n - 1 && arr[i + 1] <= arr[i])
            i++;
        if (i == n - 1)
            break;
        int buy = i++;
        while (i < n && arr[i] >= arr[i - 1])
            i++;
        int sell = i - 1;
        cout << "Buy : " << buy << " Sell : " << sell << endl;
    }
    return;
}
int maxProfit(int arr[], int n)
{
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
            ans += (arr[i] - arr[i - 1]);
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    buyAndSellStock(arr, n);
    int ans = maxProfit(arr, n);
    cout << ans << endl;
    return 0;
}