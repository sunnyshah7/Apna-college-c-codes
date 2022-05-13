#include<bits/stdc++.h>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string s="klaohfkdncoermvnlwe";
	transform(s.begin(),s.end(),s.begin(),::toupper);
	string s1="12486983749";
	sort(s1.begin(),s1.end(),greater<int>());
	cout<<s1<<endl;
	transform(s.begin(),s.end(),s.begin(),::tolower);
	cout<<s<<endl;
	
	return 0;
}

