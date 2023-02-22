#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

string s;
int n;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        cin >> n >> s;
        int len = s.length();
        int idx = 0;
        while (n--)
        {
            int i = max_element(s.begin() + idx, s.end()) - s.begin();
            swap(s[idx++], s[i]);
            if (idx == len)
                idx = 0;
        }
        cout << s << "\n";
    }

    return 0;
}
