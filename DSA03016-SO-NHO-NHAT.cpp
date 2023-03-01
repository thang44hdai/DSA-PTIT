#include<bits/stdc++.h>
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
using namespace std;
#define test() int t; cin >> t; while(t--)
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
int main()
{
    faster()
    test()
    {
        int n, d;
        cin >> n >> d;
        string s = "";
        if(d * 9 < n) cout << -1 << endl;
        else
        {
            while(n > 9)
            {
                s += "9";
                n -= 9;
            }
            if(d - s.size() >= 2)
            {
                int idx = d - s.size();
                s += to_string(n - 1);
                for(int i = 1; i <= idx - 2; i++) s += "0";
                s += "1";
            }
            else s += to_string(n);
            reverse(s.begin(),s.end());
            cout << s << endl;
        }
    }
    return 0;
}