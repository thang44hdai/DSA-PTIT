#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
bool check(char a, char b)
{
    if (a == '(')
        return b == ')';
    if (a == '[')
        return b == ']';
    if (a == '{')
        return b == '}';
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
        stack<char> st;
        for (char i : s)
        {
            if (i == '(' or i == '[' or i == '{')
                st.push(i);
            else
            {
                if (st.empty())
                {
                    st.push('a');
                    break;
                }
                else
                {
                    if (check(st.top(), i))
                        st.pop();
                    else
                    {
                        st.push('a');
                        break;
                    }
                }
            }
        }
        if (st.size())
            cout << "NO";
        else
            cout << "YES";
        cout << "\n";
    }
    return 0;
}