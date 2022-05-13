#include<bits/stdc++.h>
using namespace std;
int main()
{
	int b,p;
	double res=1;
	cout<<"enter the power: ";
	cin>>p;
	cout<<"enter the base: ";
	cin>>b;
	for(int i=1;i<=p;i++)
	
		res=res*b;
	cout<<"the number will be: "<<res;
	
	return 0;
 } 
