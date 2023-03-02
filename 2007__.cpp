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
        for (int i = 0; i < n and k > 0; i++)
        {
            int idx = i;
            for (int j = n - 1; j > i; j--)
                if (s[j] > s[idx])
                    idx = j;
            if (s[idx] != s[i])
            {
                swap(s[idx], s[i]);
                k--;
            }
        }
        cout << s << "\n";
    }
    return 0;
}