#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n, x;
set<vector<ll>> ans;
vector<ll> vt;
vector<ll>a;
bool check=false;
void Try(int i=0, ll sum=0)
{
	if(sum>x)
		return;
	if(sum==x)
	{
		vector<ll> b(vt);
		sort(b.begin(), b.end());
		ans.insert(b);
		check=true;
		return;
	}
	for(int j=i;j<n;j++)
	{
		vt.push_back(a[j]);	
		Try(j, sum+a[j]);
		vt.pop_back();
	}
	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		a.clear();
		ans.clear();
		check=false;
		cin>>n>>x;
		int m=n;
		while(m--)
		{
			ll k;
			cin>>k;
			a.push_back(k);
		}
		Try();
		for(auto i: ans)
		{
			cout<<"[";
			for(int j=0;j<i.size()-1;j++)
				cout<<i[j]<<" ";
			cout<<i[i.size()-1]<<"] ";
		}
		if(!check)
			cout<<-1;
		cout<<endl;
	}
	return 0;
}
