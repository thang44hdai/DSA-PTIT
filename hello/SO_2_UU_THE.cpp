#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
set<ll> v;
int n;
bool check(string s)
{
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '2')
            cnt++;
    }
    return cnt > s.size() / 2;
}

void Try(string s)
{
    if (s.size() < n)
    {
        if (check(s))
            v.insert(stoll(s));
        Try(s + "0");
        Try(s + "1");
        Try(s + "2");
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    n = 10;
    Try("");
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int dem = 0;
        for (auto h : v)
        {
            cout << h << " ";
            dem++;
            if (dem == x)
                break;
        }
        cout << "\n";
    }
    return 0;
}
