#include<bits/stdc++.h>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string s="joajcoqqjclcljffisilshjsdbaaa";
	int freq[26];
	for(int i=0;i<26;i++)
	{
		freq[i]=0;
	}
	for(int i=0;i<s.size();i++)
	{
	    freq[s[i]-'a']++;
	}
	int mx=0;
	char ans;
	for(int i=0;i<26;i++)
	{
		if(mx<freq[i])
		{
			mx=freq[i];
			ans=i+'a';
		}
	}
	cout<<mx<<" "<<ans;
	return 0;
	
}
