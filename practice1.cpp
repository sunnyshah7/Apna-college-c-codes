#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	while(b!=0)
	{
		int rem=a%b;
		a=b;
		b=rem;
	}
	return a;
}
int main()
{
  int a,b;
  cin>>a>>b;
  int count=0;
  for(int i=1;i<=b;i++)
  {
  	if(a%i==0)
  	{
  		count++;
	  }
  }
  cout<<count;
}
