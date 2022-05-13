#include<bits/stdc++.h>
using namespace std;
void fab(int n)
{
	int t1=0,t2=1;
	int next;
	for(int i=1;i<=n;i++)
	{
		cout<<t1<<endl;
		next=t1+t2;
		t1=t2;
		t2=next;
	}
	return;
}
int main()
{
	int n; 
	cin>>n;
	fab(n);
	
	
	
}
