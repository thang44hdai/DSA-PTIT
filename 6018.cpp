#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int l, r;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> l;
        int a[l];
        set<int> st;
        for (auto &i : a)
        {
            cin >> i;
            st.insert(i);
        }
        int n = *max_element(a, a + l) - *min_element(a, a + l) + 1;
        cout << n - st.size() << "\n";
    }
    return 0;
}