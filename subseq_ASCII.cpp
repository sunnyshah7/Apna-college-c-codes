#include<bits/stdc++.h>
#include<string>
using namespace std;
void subseq(string s,string ans)
{
	if(s.length()==0)
	{
		cout<<ans<<endl;
		return;
	}
	char ch= s[0];
	string ros=s.substr(1);
	int code=ch;
	subseq(ros,ans);
	subseq(ros,ans+ch);
	subseq(ros,ans+ to_string(code));
	
}
int main()
{
	subseq("AB","");
	return 0;
}
