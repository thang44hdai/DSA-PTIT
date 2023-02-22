#include<bits/stdc++.h>
using namespace std;

int n, k, s;
int cnt=0;
vector<int> vt;
void Try(int i=1, int sum=0)
{
	if(sum>s or vt.size()>k)
		return;
	if(sum==s and vt.size()==k)
	{
		cnt++;
		return;
	}
	for(int j=i;j<=n;j++)
	{
		vt.push_back(j);
		Try(j+1, sum+j);
		vt.pop_back();
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	while(cin>>n>>k>>s)
	{
		if(n==0 and k==0 and k==s)
			break;
		cnt=0;
		Try();
		cout<<cnt<<"\n";
	}
	return 0;
}
