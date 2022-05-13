#include<bits/stdc++.h>
using namespace std;
void towerofhanoi(int n,char src, char hel,char des)
{
	towerofhanoi( n-1,src,hel,des);
	cout<<"moving from "<<src<<"to "<<des<<endl;
	towerofhanoi(n-1,hel,des,src);
}
int main()
{
	
	cout<<towerofhanoi(3,'a','c','b');
	return 0;
	
}
