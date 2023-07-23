#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    stack<int> st;
    while (n--)
    {
        int x;
        cin >> x;
        if (st.size())
        {
            int top = st.top();
            if ((top + x) % 2 == 0)
                st.pop();
            else
                st.push(x);
        }
        else
            st.push(x);
    }
    cout << st.size();

    return 0;
}