#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int check(vector<int> a, vector<int> b, set<int> st)
{
    if (st.size() != a.size())
        return 0;
    for (int i = 0; i < a.size(); i++)
        if (a[i] != b[i])
            return 0;
    return 1;
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
        int n;
        cin >> n;
        vector<int> a;
        set<int> st;
        while (n--)
        {
            int x;
            cin >> x;
            a.push_back(x);
            st.insert(x);
        }
        vector<int> b = a;
        sort(b.begin(), b.end());
        cout << check(a, b, st) << "\n";
    }
    return 0;
}