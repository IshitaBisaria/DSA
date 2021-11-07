#include <bits/stdc++.h>
using namespace std;
vector<int> frequencies(int arr[], int n)
{
    int freq = 1;
    vector<int> ans;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            freq++;
        }
        else
        {
            ans.push_back(freq);
            freq = 1;
        }
    }
    ans.push_back(freq);
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<int> freq = frequencies(arr, n);
    for (int i = 0; i < freq.size(); i++)
        cout << freq[i] << " ";
    cout << endl;
    return 0;
}