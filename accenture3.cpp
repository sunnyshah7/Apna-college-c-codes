#include<bits/stdc++.h>
#include<string>
using namespace std;
char And(char ch1,char ch2)
{
	if(ch1=='1'and ch2=='1')
	{
		return 1;
	}
	return 0;
}
char Xor(char ch1,char ch2)
{
   if(ch1==ch2)
	{
		return 0;
	}
	return 1;
}
char OR(char ch1,char ch2)
{
	if(ch1=='0'and ch2=='0')
	{
		return 0;
	}
	return 1;
}

int helper(string s){
char ans=s[0];
int i=1;
for(int i=1;i<s.length();i+=2)
{
	int operation=s[i];
	int ans2=s[i+1];
	if(operation=='A')
	{
		ans=And(ans,ans2);
	}
	else if(operation=='B')
	{
		ans=OR(ans,ans2);
	}
	else
	{
		ans=Xor(ans,ans2);
	}
}
if(ans)
  {
  	return 1;
  }
  else
  {
  	return 0;
  }
}
int main()
{
	string s;
	cin>>s;
	cout<<helper(s);
	
}
