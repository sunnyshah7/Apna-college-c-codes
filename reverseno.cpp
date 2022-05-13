#include<bits/stdc++.h>
using namespace std;
 int main()
 {
 	int n;
 	cin>>n;
 	int org=n;
 	int sum=0,lastno;
 	while(n>0)
 	{   lastno=n%10;
 		sum+=pow(lastno,3);
 		n=n/10;
	 }
	 if(sum==org)
	 {
	 	cout<<"no is armstrong: ";
	 }
	 else
	  cout<<" not armstrong: ";
 }
