#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
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
        stack<string> st;
        for (char i : s)
        {
            if (i == '+' or i == '-' or i == '*' or i == '/')
            {
                string fi = st.top();
                st.pop();
                string se = st.top();
                st.pop();
                st.push(i + se + fi);
            }
            else
                st.push(string(1, i));
        }
        cout << st.top() << "\n";
    }
    return 0;
}