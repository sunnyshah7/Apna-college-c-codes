#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n;
	double res;
	
	cout<<"enter the number for factorial: ";
	cin>>n;
	res=1;
	for(i=0;i<=n;i++)
	
		res=res*i;
	cout<<"the foctorial will b: "<<res;
	
	return 0;
}
