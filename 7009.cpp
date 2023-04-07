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
        string ans = 0;
        stack<char> st;
        reverse(s.begin(), s.end());
        for (char i : s)
        {
            if (isalpha(i))
                st.push(i);
            else
            {
                char x = st.top();
                st.pop();
                char y = st.top();
                st.pop();
                ans = "(" + to_string(x) + i + to_string(y) + ")" + ans;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}