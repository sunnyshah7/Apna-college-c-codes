#include<bits/stdc++.h>
using namespace std;
int tilling(int n)
{
	if(n==0||n==1)
	{
		return n;
	}
	return tilling(n-1)+tilling(n-2);
}
int main()
{
	cout<<tilling(4)<<endl;
	return 0;
}
