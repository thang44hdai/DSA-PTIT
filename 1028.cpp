#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define ll long long

int n, k;
int a[25];
int b[25];
void Try()
{
    for (int i = 1; i <= k; i++)
        a[i] = i;
    while (1)
    {
        for (int i = 1; i <= k; i++)
            cout << b[a[i]] << " ";
        cout << "\n";
        int i = k;
        while (i and a[i] >= n - k + i)
            i--;
        if (!i)
            return;
        a[i]++;
        for (int j = i + 1; j <= k; j++)
            a[j] = a[i] + j - i;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> k;
    set<int> st;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        st.insert(x);
    }
    n = st.size();
    int idx = 1;
    for (auto i : st)
        b[idx++] = i;
    Try();
    return 0;
}