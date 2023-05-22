#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define ll long long
string s;
int k;
int n;
int a[25];
set<string> st;
void sol()
{
    while (1)
    {
        string tmp = "";
        for (int i = 1; i <= k; i++)
            tmp += s[a[i]];
        st.insert(tmp);
        int i = k;
        while (i and a[i] >= n - k + i)
            i--;
        if (i == 0)
            return;
        a[i]++;
        for (int j = i + 1; j <= k; j++)
            a[j] = a[j - 1] + 1;
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
        st.clear();
        cin >> s >> k;
        n = s.length();
        s = " " + s;
        for (int i = 1; i <= k; i++)
            a[i] = i;
        sol();
        for (auto i : st)
            cout << i << "\n";
    }
    return 0;
}