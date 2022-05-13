#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter the value of a,b,c res: ";
	cin>>a>>b>>c;
	if(a>b & a>c)
	{
		cout<<"a is greater";
	}
	else if(b>a & b>c)
	{
		cout<<"b is gterater: ";
	}
	else
	cout<<"c is greater";
	return 0;
}
