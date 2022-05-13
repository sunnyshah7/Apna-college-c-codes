#include<bits/stdc++.h>
using namespace std;
 int main()
 {
 	int n,flag=0;
 	cin>>n;
 	for(int i=2;i<=sqrt(n);i++)
 	{
 		if(n%i==2)
 		{
 			cout<<"not prime: ";
 			flag=1;
 			break;
 			
		 }
		 
	 }
	 if(flag==0)
		 {
		 	cout<<"no is prime: ";
		 }
		return 0;
 	
 }
