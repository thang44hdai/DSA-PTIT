#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

string s;
int x;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s;
        x = s.length();
        for (int i = 1; i < x; i++)
            if (s[i] == '1')
                s[i] = (s[i - 1] - '0' + 1) % 2 + '0';
            else
                s[i] = s[i - 1];
        cout << s << "\n";
    }
    return 0;
}