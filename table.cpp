#include<bits/stdc++.h>
using namespace std;
 int main()
 {
 	int sum,counter,n;
 	cout<<"enter the number of table: ";
 	cin>>n;
 	counter =1;
 	in:
 		sum= n*counter;
 		cout<<n<<"*"<<counter<<"="<<sum<<endl;
 		counter=counter+1;
 	if(counter<=10)
	 {
	 	goto in;
	 	
		 }
	return 0;	 	
 }
