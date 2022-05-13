#include<bits/stdc++.h>
using namespace std;
int binaryTooctal(int n)
{
	int x=1;
	int ans,y;
	while(n>0)
	{
		y=n%10;
		ans+=y*x;
		x*=8;
		n/=n;
	}
	return ans;
}

int main()
{
	int n;
	cin>>n;
	cout<<binaryTooctal(n);
}
