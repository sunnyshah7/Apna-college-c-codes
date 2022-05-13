#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	char ch;
	cout<<"press any key:";
	cin>>ch;
	a=ch;
	if(ch>=65 && ch<=90)
	{
		a=a+32;
		ch=a;
		cout<<"the letter will be: "<<ch;
		
	}
	else if(ch>=96 && ch<=122)
	{
		a=a-32;
		ch=a;
		cout<<"the letter will be: "<<ch;
		
	}
	return 0;
}
