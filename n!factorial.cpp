#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n;
	float res=1,j,k=0;
	cout<<"enter the number for factorial: ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
	
	   res=res*i;
	   j=i/res;
	   k=k+j;
}
	cout<<"the factorial of the number will be: "<<k;
	return 0;   
}
