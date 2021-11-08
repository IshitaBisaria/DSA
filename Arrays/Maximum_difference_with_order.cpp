#include <bits/stdc++.h>
using namespace std;
int maxDiff(int arr[], int n)
{
    int ans = arr[1] - arr[0];
    int minValue = arr[0];
    for (int i = 1; i < n; i++)
    {
        ans = max(ans, arr[i] - minValue);
        minValue = min(minValue, arr[i]);
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
    int ans = maxDiff(arr, n);
    cout << ans << endl;
}