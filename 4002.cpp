#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

long long poww(long long n, long long k)
{
    if (k == 0)
        return 1;
    long long x = poww(n, k / 2);
    if (k % 2 == 0)
        return (x * x) % MOD;
    return (n * ((x * x) % MOD)) % MOD;
}

void testCase()
{
    long long n;
    cin >> n;
    string n1 = to_string(n);
    reverse(n1.begin(), n1.end());
    long long r = stoll(n1);
    cout << poww(n, r);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T = 1;
    cin >> T;
    while (T--)
    {
        testCase();
        cout << "\n";
    }
    return 0;
}