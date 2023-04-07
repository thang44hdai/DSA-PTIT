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
        set<char> st;
        for (auto i : s)
            st.insert(i);
        int n = st.size();
        map<char, int> mp;
        int l = 0;
        int ans = 1e9;
        for (int r = 0; r < s.length(); r++)
        {
            mp[s[r]]++;
            while (mp.size() == n)
            {
                ans = min(ans, r - l + 1);
                mp[s[l]]--;
                if (mp[s[l]] == 0)
                    mp.erase(s[l]);
                l++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}