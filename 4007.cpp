#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int k;
string a, b;

void init()
{
    if (a.length() == b.length())
        return;
    if (a.length() < b.length())
    {
        int x = a.length();
        int y = b.length();
        for (int i = x + 1; i <= y; i++)
            a = "0" + a;
    }
    else
    {
        int x = a.length();
        int y = b.length();
        for (int i = y + 1; i <= x; i++)
            b = "0" + b;
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
        cin >> k >> a >> b;
        init();
        vector<int> vt;
        int du = 0;
        int x = a.length();
        for (int i = x - 1; i >= 0; i--)
        {
            vt.push_back((a[i] - '0' + b[i] - '0' + du) % k);
            du = (a[i] - '0' + b[i] - '0'+du) / k;
        }
        if (du)
            vt.push_back(du);
        for (int i = vt.size() - 1; i >= 0; i--)
            cout << vt[i];
        cout << "\n";
    }
    return 0;
}