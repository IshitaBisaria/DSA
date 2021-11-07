#include <bits/stdc++.h>
using namespace std;
string reverse(string s)
{
    for (int i = 0; i < s.size() / 2; i++)
        swap(s[i], s[s.size() - i - 1]);
    return s;
}
int main()
{
    string s;
    cin >> s;
    s = reverse(s);
    cout << s;
    return 0;
}