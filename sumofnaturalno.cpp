#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
	int sum=0;
	for(int i=0;i<=n;i++)
	{
		sum=(i(i+1))/2;
		return sum;
	}
	 
}
int main()
{
	int n;
	cin>>n;
	sum(n);
	return 0;
	
}
