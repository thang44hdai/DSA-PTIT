#include <bits/stdc++.h>
#pragma GCC optimze("Ofast")
using namespace std;
#define ll long long

int n, v;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> v;
        int a[n], c[n];
        for (auto &i : a)
            cin >> i;
        for (auto &i : c)
            cin >> i;
        int V[v + 5] = {}; // Giá trị lớn nhất ở thế tích v
        for (int i = 0; i < n; i++)
            for (int j = v; j >= a[i]; j--)
                V[j] = max(V[j], V[j - a[i]] + c[i]);
        cout << V[v] << "\n";
    }
    return 0;
}