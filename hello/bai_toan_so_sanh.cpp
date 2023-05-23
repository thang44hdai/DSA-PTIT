#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int n;
string sol()
{
    cin >> n;
    string a, b, c;
    unordered_map<string, int> dd;
    deque<string> dq;
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b >> c;
        if (dd[a] == 0 and dd[c] == 0)
        {
            dd[a] = dd[c] = 1;
            if (b == ">")
            {
                dq.push_back(a);
                dq.push_front(c);
            }
            else
            {
                dq.push_back(c);
                dq.push_front(a);
            }
        }
        else if (dd[a] == 0 and dd[c] == 1)
        {
            if (b == ">")
            {
                stack<string> st;
                while (dq.size() and dq.front() != c)
                {
                    st.push(dq.front());
                    dq.pop_front();
                }
                dq.pop_front();
                dq.push_front(a);
                dq.push_front(c);
                while (st.size())
                {
                    dq.push_front(st.top());
                    st.pop();
                }
            }
            else
            {
                stack<string> st;
                while (dq.size() and dq.back() != c)
                {
                    st.push(dq.back());
                    dq.pop_front();
                }
                dq.pop_back();
                dq.push_back(a);
                dq.push_back(c);
                while (st.size())
                {
                    dq.push_back(st.top());
                    st.pop();
                }
            }
        }
        else
        {
            if (b == ">")
            {
                stack<string> st;
                while (dq.size() and dq.front() != c)
                {
                    st.push(dq.front());
                    dq.pop_front();
                }
                if (st.top() == a)
                    return "impossible";
                else
                {
                    while (st.size())
                    {
                        dq.push_front(st.top());
                        st.pop();
                    }
                }
            }
            else
            {
                stack<string> st;
                while (dq.size() and dq.back() != c)
                {
                    st.push(dq.back());
                    dq.pop_front();
                }
                if (st.top() == a)
                    return "impossible";
                else
                {
                    while (st.size())
                    {
                        dq.push_back(st.top());
                        st.pop();
                    }
                }
            }
        }
    }
    return "possible";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout << sol();
    return 0;
}
