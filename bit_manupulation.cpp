#include<bits/stdc++.h>
using namespace std;
int get(int n,int pos)
{
	return(n&(1<<pos)!=0);
}
int setbit(int n,int pos)
{
	return(n|(1<<pos));
}
int clearbit(int n,int pos)
{
	int mask= ~(1<<pos);
	return(n & mask);
}
int updatebit(int n,int pos,int val)
{
	int mask= ~(1<<pos);
	n=n&mask;
	return(n|(val<<pos));
}
int main()
{
	int n,pos;
	cin>>n>>pos;
//	cout<<get(n,pos);
//	cout<<setbit(n,pos);
//	cout<<clearbit(n,pos);
cout<<updatebit(n,pos,1);
}
