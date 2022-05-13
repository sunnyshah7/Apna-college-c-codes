#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
	int fact=1;
	for(int i=2;i<=n;i++)
	{
		fact*=i;
	}
	return fact;
}
int main()
{
	int n,ans,r;
	cin>>n>>r;
	ans=fact(n)/(fact(r)*fact(n-r));
	cout<<ans;
	
}
