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
        int n = s.length();
        stack<char> st;
        int ans = 0, cnt = 0;
        for (char i : s)
        {
            if (i == '(')
                st.push(i);
            else
            {
                if (st.empty())
                    cnt = 0;
                else
                    cnt += 2;
            }
            ans = max(ans, cnt);
        }
        cout << ans << "\n";
    }
    return 0;
}