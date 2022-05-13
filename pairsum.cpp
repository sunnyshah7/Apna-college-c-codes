#include<bits/stdc++.h>
using namespace std;
bool pairsum(int arr[],int n,int key)
{
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]+arr[j]==key)
			{   cout<<i<<" ";
				return true;
			}
		}
	}
	return false;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int key=31;
	cout<<pairsum(arr,n,key)<<endl;
	return 0;
}
