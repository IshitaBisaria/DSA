#include <bits/stdc++.h>
using namespace std;
bool isincreasing(int a[], int l, int r)
{
    for (int i = l + 1; i <= r; i++)
    {
        if (a[i - 1] > a[i])
            return false;
    }
    return true;
}
bool isdecreasing(int a[], int l, int r)
{
    for (int i = l + 1; i <= r; i++)
    {
        if (a[i - 1] < a[i])
            return false;
    }
    return true;
}
bool decRotated(int a[], int maxIndex, int minIndex, int n)
{
    if (a[0] > a[n - 1])
        return false;
    return (isdecreasing(a, 0, minIndex) && isdecreasing(a, maxIndex, n - 1));
}
bool incRotated(int a[], int maxIndex, int minIndex, int n)
{
    if (a[0] < a[n - 1])
        return false;
    return (isincreasing(a, 0, maxIndex) && isincreasing(a, minIndex, n - 1));
}
bool checkRotatedAndSorted(int arr[], int n)
{
    int minIndex = 0;
    int maxIndex = 0;
    bool res = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[minIndex])
            minIndex = i;

        if (arr[i] > arr[maxIndex])
            maxIndex = i;
    }
    if (maxIndex == minIndex - 1)
    {
        res = incRotated(arr, maxIndex, minIndex, n);
    }
    if (minIndex == maxIndex - 1)
    {
        res = decRotated(arr, maxIndex, minIndex, n);
    }

    return res;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    if (checkRotatedAndSorted(arr, n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}