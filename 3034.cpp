#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define ll long long

int n, m, k;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> k;
        int a[n], b[m], c[k];
        unordered_map<int, int> a1, b1, c1;
        for (auto &i : a)
        {
            cin >> i;
            a1[i]++;
        }
        for (auto &i : b)
        {
            cin >> i;
            b1[i]++;
        }
        for (auto &i : c)
        {
            cin >> i;
            c1[i]++;
        }
        bool check = false;
        for (auto i : a)
            if (b1[i] and c1[i])
            {
                check = true;
                int minLength = min({a1[i], b1[i], c1[i]});
                for (int j = 1; j <= minLength; j++)
                    cout << i << " ";
                a1[i] = b1[i] = c1[i] = 0;
            }
        if (!check)
            cout << "NO";
        cout << "\n";
    }
    return 0;
}