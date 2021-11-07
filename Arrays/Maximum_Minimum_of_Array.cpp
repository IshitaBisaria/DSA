#include <bits/stdc++.h>
using namespace std;
pair<int, int> minMaxArray(int arr[], int n)
{
    pair<int, int> ans = {INT_MIN, INT_MAX};
    for (int i = 0; i < n; i++)
    {
        ans.first = max(ans.first, arr[i]);
        ans.second = min(ans.second, arr[i]);
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
    pair<int, int> p = minMaxArray(arr, n);
    cout << p.first << " " << p.second << " ";
}