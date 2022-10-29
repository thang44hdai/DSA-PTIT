#include<bits/stdc++.h>
using namespace std;

int n;
int a[105];

int check()
{
	int l=0, r=n-1;
	while(l<r)
	{
		if(a[l]!=a[r]) 
			return 0;
		l++;
		r--;
	}
	return 1;
}

void print()
{
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<"\n";
}
void Try(int i=0)
{
	if(i==n)
	{
		if(check()==1)
			print();
		return;
	}
	for(int j=0;j<=1;j++)
	{
		a[i]=j;
		Try(i+1);
	}
}
int main()
{
	cin>>n;
	Try();
	return 0;
}