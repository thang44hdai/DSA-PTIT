#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

ll tinh(ll a, ll b, string c)
{
    if (c == "+")
        return a + b;
    if (c == "-")
        return a - b;
    if (c == "*")
        return a * b;
    return a / b;
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
        int n;
        cin >> n;
        string s[n];
        stack<ll> st;
        for (string &i : s)
            cin >> i;
        for (int i = n - 1; i >= 0; --i)
        {
            if (s[i] != "+" and s[i] != "-" and s[i] != "*" and s[i] != "/")
                st.push(stoll(s[i]));
            else
            {
                ll fi = st.top();
                st.pop();
                ll se = st.top();
                st.pop();
                st.push(tinh(fi, se, s[i]));
            }
        }
        cout << st.top() << "\n";
    }
    return 0;
}
