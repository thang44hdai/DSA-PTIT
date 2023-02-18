#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

string s;
void sol()
{
    int cnt[500] = {};
    int Max = 0;
    for (char i : s)
    {
        cnt[i]++;
        Max = max(Max, cnt[i]);
    }
    if (Max -1 <= s.length() - Max)
        cout << 1 << "\n";
    else
        cout << -1 << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        cin >> s;
        sol();
    }

    return 0;
}