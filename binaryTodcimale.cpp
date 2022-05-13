#include<bits/stdc++.h>
using namespace std;
 int binaryTodecimal(int n)
 { int x=1;
 int ans=0,y;
 while(n>0)
 {
 	y=n%10;
 	ans+=y*x;
 	x*=2;
 	n/=10;
 }
 return ans;
 
 	
 }
 int main()
 {
 	int n;
 	cin>>n;
 	cout<<binaryTodecimal(n);
 	return 0;
 }
