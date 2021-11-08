#include <bits/stdc++.h>
using namespace std;
int majorityElement(int arr[], int n)
{
    int count = 0;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[res])
            count++;
        else
            count--;
        if (count == 0)
        {
            res = i;
            count = 1;
        }
    }
    count = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] == arr[res])
            count++;
    if (count > n / 2)
        return arr[res];
    else
        return -1;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int ans = majorityElement(arr, n);
    cout << ans << endl;
}