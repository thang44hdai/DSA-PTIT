#include <bits/stdc++.h>
#pragma GCC optimze("Ofast")
using namespace std;
#define ll long long

int n, m, k;
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
        ll a[n];
        ll max_sum = INT_MIN, sum = 0;
        for (auto &i : a)
        {
            cin >> i;
            sum += i;
            if (sum < 0)
                sum = 0;
            else
                max_sum = max(max_sum, sum);
        }
        cout << max_sum << "\n";
    }

    return 0;
}