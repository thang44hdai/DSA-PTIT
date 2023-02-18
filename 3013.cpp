#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

string s;
int k;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> k >> s;
        int cnt[500] = {};
        int Max = 0;
        for (auto i : s)
        {
            cnt[i]++;
            Max = max(Max, cnt[i]);
        }
    //cout<<s<<" ";
        if (Max <= ceil(s.length() * 1.0 / k))
            cout << 1;
        else
            cout << -1;
        cout << "\n";
    }

    return 0;
}