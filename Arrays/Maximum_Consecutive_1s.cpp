#include <bits/stdc++.h>
using namespace std;
int maximumConsecutive1s(int arr[], int n)
{
    int ans = 0, res = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            res++;
            ans = max(ans, res);
        }
        else
            res = 0;
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
    int max1s = maximumConsecutive1s(arr, n);
    cout << max1s << endl;
    return 0;
}