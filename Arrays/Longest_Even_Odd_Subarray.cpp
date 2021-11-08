#include <bits/stdc++.h>
using namespace std;
int longestEvenOddSubarray(int arr[], int n)
{
    int ans = 1;
    int res = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if ((arr[i] % 2 == 0 && arr[i + 1] % 2 != 0) || (arr[i] % 2 != 0 && arr[i + 1] % 2 == 0))
        {
            res++;
            ans = max(ans, res);
        }
        else
            res = 1;
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
    int ans = longestEvenOddSubarray(arr, n);
    cout << ans << endl;
}