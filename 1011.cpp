#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

string s;
int x;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> x >> s;
        int n = s.length();
        s = " " + s;
        int i = n - 1;
        while (i and s[i] >= s[i + 1])
            i--;
        if (i == 0)
            cout << x << " " << "BIGGEST";              
        else
        {
            int j = n;
            while (s[i] >= s[j])
                j--;
            swap(s[i], s[j]);
            int l = i + 1, r = n;
            while (l < r)
                swap(s[l++], s[r--]);
            s.erase(0, 1);
            cout << x << " " << s;
        }
        cout << "\n";
    }
    return 0;
}