#include<bits/stdc++.h>
using namespace std;
map<string,int>a;
map<int,string>b;
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		string s;
		cin>>s;
		a[s]++;
	}
	for(int i=1;i<=m;i++)
	{
		string s;
		cin>>s;
		b[i]=s;
	}
	int ans=0,p0=0;
	cin>>p0;
	for(int i=1;i<=m;i++)
	{
		int x;
		cin>>x;
		if(a[b[i]]!=0) n-=a[b[i]],ans=ans+a[b[i]]*x,a[b[i]]=0;
	}
	cout<<ans+n*p0;
	return 0;
}