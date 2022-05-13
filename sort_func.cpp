#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
bool com(int a,int b){
	return a>b;
}
 int main()
 {
 	int a[]={5,6,8,4,3};
 	int n=sizeof(a)/sizeof(int);
 	sort(a,a+n,com);
	 for(int i=0;i<n;i++)
	 {
	 	cout<<a[i]<<" ";
	  } 
	  return 0;
 }
