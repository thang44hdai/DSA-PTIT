#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define ll long long

int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    int a[n];
    int cnt = 0, idx = 1;
    for (auto &i : a)
        cin >> i;
    int vt[n + 1] = {};
    for (auto i : a)
        vt[i] = vt[i - 1] + 1; //  đếm dãy con tăng dài nhất
    cout << n - *max_element(vt, vt + n + 1);
    return 0;
}