#include <bits/stdc++.h>
using namespace std;
int maxIndex(int arr[], int n)
{
    int lmin[n];
    lmin[0] = arr[0];
    int rmax[n];
    rmax[n - 1] = arr[n - 1];
    for (int i = 1; i < n; i++)
        lmin[i] = min(arr[i], lmin[i - 1]);
    for (int i = n - 2; i >= 0; i--)
        rmax[i] = max(arr[i], rmax[i + 1]);
    int i = 0, j = 0;
    int ans = INT_MIN;
    while (i < n && j < n)
    {
        if (lmin[i] > rmax[j])
            i++;
        else
        {
            ans = max(ans, j - i);
            j++;
        }
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
    int ans = maxIndex(arr, n);
    cout << ans << endl;
}