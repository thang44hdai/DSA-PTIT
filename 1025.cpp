#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define ll long long

int n, k;
char a[20];
string s;
void Try(int i = 1)
{
    if (s.length() == k)
    {
        cout << s << "\n";
        return;
    }
    for (int j = i; j <= n; j++)
    {
        s += a[j];
        Try(j + 1);
        s.pop_back();
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        s = "";
        a[1] = 'A';
        for (int i = 2; i <= n; i++)
            a[i] = a[i - 1] + 1;
        Try();
        // for(int i=1;i<=n;i++)
        //     cout<<a[i];
    }
    return 0;
}