#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

string s;
int n;
string sol()
{
    stack<char> st;
    for (auto i : s)
    {
        if (i != ')')
            st.push(i);
        else
        {
            bool check = false;
            while (st.size())
            {
                if (st.top() == '+' or st.top() == '-' or st.top() == '*' or st.top() == '/')
                    check = true;
                if (st.top() == '(')
                {
                    st.pop();
                    break;
                }
                st.pop();
            }
            if (!check)
                return "Yes";
        }
    }
    return "No";
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
        getline(cin, s);
        cout << sol() << "\n";
    }

    return 0;
}