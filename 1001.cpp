#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length() - 1;
        while (s[n] == '1')
            n--;
        if (n < 0)
        {
            for (int i = 0; i <= s.length() - 1; i++)
                cout << 0;
            cout << "\n";
            continue;
        }
        s[n] = '1';
        for (int i = n + 1; i < s.length(); i++)
            s[i] = '0';
        cout << s << "\n";
    }
    return 0;
}
