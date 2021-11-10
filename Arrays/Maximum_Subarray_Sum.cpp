#include <bits/stdc++.h>
using namespace std;
int maximumSubarraySum(int arr[], int n)
{
    int ans = INT_MIN;
    int currsum = 0;
    for (int i = 0; i < n; i++)
    {
        if (currsum < 0)
            currsum = 0;
        currsum += arr[i];
        ans = max(ans, currsum);
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
    int maxSubArraySum = maximumSubarraySum(arr, n);
    cout << maxSubArraySum << endl;
    return 0;
}