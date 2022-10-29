#include <bits/stdc++.h>
#pragma GCC optimze("Ofast")
using namespace std;
#define ll long long
string s;
vector<char> vt;
int n;
int cnt[15] = {};
void Try(int i = 0)
{
    if (vt.size() == n)
    {
        for (auto k : vt)
            cout << k;
        cout << " ";
        return;
    }
    for (int j = 0; j < n; j++)
    {
        if (cnt[j] == 0)
        {
            cnt[j] = 1;
            vt.push_back(s[j]);
            Try(j + 1);
            vt.pop_back();
            cnt[j] = 0;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        memset(cnt, sizeof(cnt[0]), 0);
        cin >> s;
        n = s.length();
        Try();
        cout << "\n";
    }
    return 0;
}
