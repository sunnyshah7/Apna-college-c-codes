#include<bits/stdc++.h>
using namespace std;
int knap(int value[],int wt[],int n,int w)
{
	if(n==0||w==0)
	{
		return 0;
	}
	if(wt[n-1]>w)//checking the weight of n-1 item
	{
		return knap(value,wt,n-1,w);
	}
	return max(knap(value,wt,n-1,w-wt[n-1])+value[n-1],knap(value,wt,n-1,w));
}
int main()
{
	int value[]={100,50,150};
	int wt[]={10,20,30};
	cout<<knap(value,wt,3,50);
	return 0;
}
