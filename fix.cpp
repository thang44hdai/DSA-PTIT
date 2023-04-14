#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define ll long long

string sol(string s)
{
    stack<char> st;
    for (char i : s)
    {
        if (i == '(' or i == '{' or i == '[')
            st.push(i);
        else if (i == ')')
        {
            if (st.size() and st.top() == '(')
                st.pop();
            else
                return "false";
        }
        else if (i == ']')
        {
            if (st.size() and st.top() == '[')
                st.pop();
            else
                return "false";
        }
        else if (i == '}')
        {
            if (st.size() and st.top() == '{')
                st.pop();
            else
                return "false";
        }
    }
    if (st.size())
        return "false";
    return "true";
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
        string s;
        cin >> s;
        cout << sol(s) << "\n";
    }
    return 0;
}