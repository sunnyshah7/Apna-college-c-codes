#include<bits/stdc++.h>
using namespace std;

int  seive(int n)
{
	int j;
	int prime[n+1]={0};
	for(int i=0;i<=n;i++)
	{
		if(prime[i]==0)
		{
			for(int j=i*i;j<=n;j+=i)
			{
				prime[j]=1;
			}
		}
		
	}
	for(int i=2;i<=n;i++)
	{
		if(prime[i]==0)
		{
			cout<<i<<" ";
		}
	}cout<<endl;
}
int main()
{
	int n;
cin>>n;
seive(n);
return 0;	
}
