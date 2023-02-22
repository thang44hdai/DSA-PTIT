#include<bits/stdc++.h>
using namespace std;

int n;
string s[15], hv[15];
int ok[15]={};

int check(string a, string b)
{
	int dem[500]={};
	for(auto i: a)
		dem[i]++;
	for(auto i: b)
		dem[i]++;
	int cnt=0;
	for(auto i: a)
		if(dem[i]==2)
			cnt++;
	return cnt;	
}
vector<int> vt;
int Min=INT_MAX;
void Try(int i=1, int cnt=0)
{
	if(cnt>Min)
		return;
	if(i>n)
	{
		Min=min(Min, cnt);
		return;
	}
	for(int j=1;j<=n;j++)
	{
		if(!ok[j])
		{
			ok[j]=1;
            hv[i]=s[j];
            int x=check(hv[i], hv[i-1]);
            Try(i+1, cnt+x);
            ok[j]=0;
		}
	}			
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)
	 	cin>>s[i];
   	s[0]="";
    hv[0]="";
    vt.push_back(0);
	Try();
	cout<<Min;
	return 0;
}