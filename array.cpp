#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int arr[n];

for(int i=0;i<=n;i++)
{
	cin>>arr[i];
}
int max=INT_MIN;
int min=INT_MAX;
for(int i=0;i<=n;i++)
{
	if(max<arr[i])
	{
		max= arr[i];
	}
	if(min>arr[i])
	{
		min=arr[i];
	}
}
cout<<max<<" "<<min;

return 0;
}
