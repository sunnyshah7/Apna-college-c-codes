#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
for(int i=1;i<=7;i++)
{
	for(int j=1;j<=7;j++)
	{
		if((i==1 or i==7) and (j!=1 and j!=7) )
		{
			cout<<"*";
		}
	}
}
}
