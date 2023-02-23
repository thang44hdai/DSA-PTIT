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
        int n = s.length();
        int idx = 0;
        while (k-- and idx < n)
        {
            int i = max_element(s.begin() + idx, s.end()) - s.begin();
            swap(s[idx++], s[i]);
        }
        cout << s << "\n";
    }
    return 0;
}