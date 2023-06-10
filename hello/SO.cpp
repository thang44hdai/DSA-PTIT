#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
int n;
int a[500];
int ok;
void Try()
{
    int i = n - 1;
    while (i >= 0 and a[i] == 3)
        i--;
    if (i <0)
        ok = 0;
    else
    {
        a[i]++;
        for (int j = i + 1; j < n; j++)
            a[j] = 1;
    }
}
int check(string s)
{
    int x = 0, y = 0, z = 0;
    for (auto i : s)
        if (i == 'A')
            x++;
        else if (i == 'B')
            y++;
        else
            z++;
    if (x and y and z and x <= y and y <= z)
        return 1;
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n1;
    cin >> n1;
    string s = "ABC";
    cout << s << "\n";
    while (next_permutation(s.begin(), s.end()) != false)
        cout << s << "\n";
    n = 4;
    while (n <= n1)
    {
        fill(a, a + n, 1);
        ok = 1;
        while (ok)
        {
            string ans = "";
            for (int i = 0; i < n; i++)
                ans += s[a[i] - 1];
            if (check(ans))
                cout << ans << "\n";
            Try();
        }
        n++;
    }
    return 0;
}