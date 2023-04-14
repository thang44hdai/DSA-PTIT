#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, x[1005], a[1005], m;
void init() {
	a[1] = 2;
	a[2] = 3;
	a[3] = 5;
	a[4] = 7;
}
int cnt[1005];
void Try(int i) {
	for (int j = 1; j <= 4; j++) {
		x[i] = a[j];
		cnt[x[i]] ++;
		if (i == m) {
			if (cnt[2] > 0 && cnt[3] > 0 && cnt[5] > 0 && cnt[7] > 0 && x[m] != 2) {
				for (int k = 1; k <= m; k++) {
					cout << x[k];
				}
				cout << endl;
			}
		} else Try(i + 1);
		cnt[x[i]] --;
	}
}
int main()
{
	init();
	cin >> n;
	for (int i = 4; i <= n; i++) {
		m = i;
		Try(1);
	}
	return 0;
}