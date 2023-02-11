#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int n;
int a[1005];
int sol()
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int k = i;
        for (int j = i + 1; j < n; j++)
            if (a[j] <= a[k])
                k = j;
        if (k != i)
            ans++, swap(a[i], a[k]);
    }
    return ans;
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
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << sol() << "\n";
    }
    return 0;
}