#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define ll long long
ll hau_to(vector<string> vt)
{
    stack<ll> st;
    for (auto i : vt)
        if (i != "+" and i != "-" and i != "*" and i != "/")
            st.push(stoll(i));
        else
        {
            ll fi = st.top();
            if (st.size())
                st.pop();
            ll se = st.top();
            if (st.size())
                st.pop();
            if (i == "+")
                st.push(fi + se);
            else if (i == "-")
                st.push(se - fi);
            else if (i == "*")
                st.push(se * fi);
            else
                st.push(se / fi);
        }
    return st.top();
}
ll tien_to(vector<string> vt)
{
    stack<ll> st;
    reverse(vt.begin(), vt.end());
    for (auto i : vt)
        if (i != "+" and i != "-" and i != "*" and i != "/")
            st.push(stoll(i));
        else
        {
            ll fi = st.top();
            if (st.size())
                st.pop();
            ll se = st.top();
            if (st.size())
                st.pop();
            if (i == "+")
                st.push(fi + se);
            else if (i == "-")
                st.push(fi-se);
            else if (i == "*")
                st.push(se * fi);
            else
                st.push(se / fi);
        }
    return st.top();
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
        vector<string> vt;
        for (int i = 1; i <= n; i++)
        {
            string s;
            cin >> s;
            vt.push_back(s);
        }
        if (vt[n - 1].length() == 1)
        {
            if (vt[n - 1][0] == '+' or vt[n - 1][0] == '-' or vt[n - 1][0] == '*' or vt[n - 1][0] == '/')
                cout << hau_to(vt);
            else
                cout << tien_to(vt);
        }
        else
            cout << tien_to(vt);
        cout << "\n";
    }
    return 0;
}