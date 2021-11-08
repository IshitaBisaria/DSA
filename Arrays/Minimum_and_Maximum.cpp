#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int maxValue = INT_MIN, minValue = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        maxValue = max(maxValue, arr[i]);
        minValue = min(minValue, arr[i]);
    }
    cout << maxValue << " " << minValue << endl;
    return 0;
}