#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int f[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, cnt = 0;
        cin >> n;
        int idx = 9;
        while (n)
        {
            cnt += n / f[idx];
            n = n % f[idx];
            idx--;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}