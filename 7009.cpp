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
        string ans = "";
        stack<string> st;
        reverse(s.begin(), s.end());
        for (char i : s)
        {
            if (i != '+' and i != '-' and i != '*' and i != '/')
                st.push(string(1, i));
            else
            {
                string fi = st.top();
                st.pop();
                string se = st.top();
                st.pop();
                string tmp = "(" + fi + i + se + ")";
                st.push(tmp);
            }
        }
        cout << st.top() << "\n";
    }
    return 0;
}