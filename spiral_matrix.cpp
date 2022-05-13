#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int freq[n];
	for(int i=0;i<n;i++)
	{
		freq[i]=0;
	}
	for(int i=0;i<n;i++)
	{
		freq[arr[i]]++;
	}
	int count=INT_MIN;
	int count2=INT_MAX;
	int ans1=0;
	int ans=0;
	for(int i=0;i<n;i++)
	{
		if(freq[i]<count)
		{
			ans1=arr[i];
		}
	}
		for(int i=0;i<n;i++)
	{
		if(freq[i]>count2)
		{
			ans=arr[i];
		}
	}
	int diff=ans-ans1;
	cout<<diff;
}
