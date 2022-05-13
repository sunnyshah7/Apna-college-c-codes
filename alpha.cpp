#include<bits/stdc++.h>
using namespace std;
int alfa(char ch)
{
	if(ch>='A' && ch<='Z')
	{
		cout<<"is alpha";
	}
	else if(ch>='a'&& ch<='z')
	{
		cout<<"is alpha";
	}
	else
	cout<<"not alpha";
}

int main()
{
	char ch;
	cin>>ch;
	alfa(ch);
	return 0;
}
