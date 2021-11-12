#include <bits/stdc++.h>
using namespace std;
void rearrange(int arr[], int n)
{
    int mini = 0, maxi = n - 1;
    int me = arr[n - 1] + 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            arr[i] += (arr[maxi] % me) * me;
            maxi--;
        }
        else
        {
            arr[i] += (arr[mini] % me) * me;
            mini++;
        }
    }
    for (int i = 0; i < n; i++)
        arr[i] = arr[i] / me;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    rearrange(arr, n);
    return 0;
}