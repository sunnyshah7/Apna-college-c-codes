#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	int k=34;
	int flag=false;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		
		{
			cin>>arr[i][j];
		}
		cout<<endl;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
				if(arr[i][j]==k)
	            {
		            cout<<" Index is "<<i<<" "<<j;
		            flag=true;
	            }
		}
		cout<<endl;
    }
    if(flag)
    {
    	cout<<"found";
	}
	else
	{
		cout<<"not found";
	}

	return 0;
}

