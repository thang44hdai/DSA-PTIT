#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int a[n];
    for (int &i : a)
        cin >> i;
    vector<int> tang;
    vector<int> giam;
    stack<int> st;
    st.push(n - 1);
    tang.push_back(n - 1);
    for (int i = n - 2; i >= 0; i--)
    {
        while (st.size() and a[i] >= a[st.top()])
            st.pop();
        
    }
    return 0;
}
