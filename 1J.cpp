#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

void computePrevNextSmaller(int n, int a[], vector<int> &prevSmaller, vector<int> &nextSmaller)
{
    stack<int> s;
    for (int i = 0; i < n; ++i)
    {
        while (!s.empty() && a[s.top()] >= a[i])
        {
            s.pop();
        }
        prevSmaller[i] = (s.empty()) ? -1 : s.top();
        s.push(i);
    }
    while (!s.empty())
    {
        s.pop();
    }

    for (int i = n - 1; i >= 0; --i)
    {
        while (!s.empty() && a[s.top()] >= a[i])
        {
            s.pop();
        }
        nextSmaller[i] = (s.empty()) ? n : s.top();
        s.push(i);
    }
}

void solve(int n, int a[])
{
    vector<int> prevSmaller(n);
    vector<int> nextSmaller(n);
    vector<int> res(n + 1, 0);

    computePrevNextSmaller(n, a, prevSmaller, nextSmaller);

    vector<int> maxOfMin(n + 1, 0);

    for (int i = 0; i < n; ++i)
    {
        int len = nextSmaller[i] - prevSmaller[i] - 1;
        maxOfMin[len] = max(maxOfMin[len], a[i]);
    }

    for (int i = n - 1; i >= 1; --i)
    {
        maxOfMin[i] = max(maxOfMin[i], maxOfMin[i + 1]);
    }

    for (int i = 1; i <= n; ++i)
    {
        cout << maxOfMin[i] << " ";
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    solve(n, a);

    return 0;
}
