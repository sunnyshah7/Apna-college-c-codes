#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
        cin>>arr[i];
    int temp[n]={0};
    bool flag=true;
    int e=n-1,s=0;
    for(int i=0;i<n;i++)
    {
    	if(flag)
    	{
    		temp[i]=arr[e--];
		}
		else
	    {
	    	temp[i]=arr[s++];
		}
		flag=!flag;
	}
    for(int i=0;i<n;i++)
    {
    	cout<<temp[i]<<" ";
	}
}
