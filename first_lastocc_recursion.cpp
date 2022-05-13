#include<bits/stdc++.h>
using namespace std;
int firstocc(int arr[],int n,int i,int key)
{
	if(i==n)
	{
		return -1;
	}
	if(arr[i]==key)
	{
		return i;
	}
	return(firstocc(arr,n,i+1,key));

}
int lastocc(int arr[],int n,int i,int key)
{
	if(i==n)
	{
		return -1;
	}
	int st= lastocc(arr,n,i+1,key);
	if(st!=-1)
	{
		return st;
	}
	if(arr[i]==key)
	{
		return i; 
	}
	return -1;
}
int main()

{
	int arr[]={1,2,3,4,2,7,4};
	int key=2;int n=6;
    cout<<firstocc(arr,6,0,2)<<endl;
    cout<<lastocc(arr,6,0,2)<<endl;
	return 0;
}
