#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, s;
    cin >> n >> s;
    if (n * 9 < s)
        cout << -1 << " " << -1 << "\n";
    else
    {
        vector<int> vt, vt1;
        while (s > 9)
        {
            vt.push_back(9);
            vt1.push_back(9);
            s -= 9;
            n--;
        }
        if (n == 1)
        {
            vt.push_back(s);
            vt1.push_back(s);
        }
        else
        {
            if (s < 1)
            {
                cout << -1 << " " << -1;
                return 0;
            }
            vt.push_back(s - 1);
            vt1.push_back(s);
            for (int i = 1; i <= n - 2; i++)
            {
                vt.push_back(0);
                vt1.push_back(0);
            }
            vt.push_back(1);
            vt1.push_back(0);
        }
        for (int i = vt.size() - 1; i >= 0; i--)
            cout << vt[i];
        cout << " ";
        for (auto i : vt1)
            cout << i;
    }
    return 0;
}