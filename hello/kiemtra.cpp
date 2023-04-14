#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define ll long long

string sol(string s)
{
    stack<char> st;
    for (char i : s)
    {
        if (i != '(' and i != ')' and i != '[' and i != ']')
            continue;
        if (i == '(' or i == '[')
            st.push(i);
        else if (i == ')')
        {
            if (st.size() and st.top() == '(')
                st.pop();
            else
                return "NO";
        }
        else if (i == ']')
        {
            if (st.size() and st.top() == '[')
                st.pop();
            else
                return "NO";
        }
    }
    if (st.size())
        return "NO";
    return "YES";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        cout << sol(s) << "\n";
    }
    return 0;
}