#include <bits/stdc++.h>
using namespace std;
vector<int> leadersArray(int arr[], int n)
{
    vector<int> ans;
    ans.push_back(arr[n - 1]);
    int leader = ans[0];
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] >= leader)
        {
            ans.push_back(arr[i]);
            leader = arr[i];
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<int> leaders = leadersArray(arr, n);
    for (int i = 0; i < leaders.size(); i++)
        cout << leaders[i] << " ";
    return 0;
}