#include <bits/stdc++.h>
using namespace std;
int Kadane(int arr[], int n)
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
int maximumCircularSubarraySum(int arr[], int n)
{
    int normalSum = Kadane(arr, n);
    if(normalSum < 0)
        return normalSum;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        arr[i] = (-1) * arr[i];
    }
    int circularSum = sum + Kadane(arr, n);
    return max(normalSum, circularSum);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int maxCircularSum = maximumCircularSubarraySum(arr, n);
    cout << maxCircularSum << endl;
    return 0;
}