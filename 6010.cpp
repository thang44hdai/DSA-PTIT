#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

string s;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        cin.ignore();
        getline(cin, s);
        set<char> st;
        for (auto i : s)
            if (i >= '0' and i <= '9')
                st.insert(i);
        for (auto i : st)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}