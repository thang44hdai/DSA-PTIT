#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

ll fixMin(string a)
{
    ll sum = 0;
    for (auto i : a)
        if (i == '6')
            sum = sum * 10 + 5;
        else
            sum = sum * 10 + i - '0';
    return sum;
}
ll fixMax(string a)
{
    ll sum = 0;
    for (auto i : a)
        if (i == '5')
            sum = sum * 10 + 6;
        else
            sum = sum * 10 + i - '0';
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string a, b;
    cin >> a >> b;
    cout << fixMin(a) + fixMin(b) << " " << fixMax(a) + fixMax(b);

    return 0;
}