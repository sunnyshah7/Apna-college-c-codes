#include<bits/stdc++.h>
using namespace std;
class student{
	public:
	string name;
	int roll_no;
	long long phone_no;
	void printinfo()
	{
		cout<<"name: "<<name<<endl;
		cout<<"roll no: "<<roll_no<<endl;
		cout<<"phone no: "<<phone_no<<endl;
	}
};
int main()
{
	student s[2];
   for(int i=0;i<2;i++)
   {cout<<"name: "<<endl;
   	cin>>s[i].name;
   	cout<<"roll no: "<<endl;
   	cin>>s[i].roll_no;
   	cout<<"phone no: "<<endl;
   	cin>>s[i].phone_no;
   }
   for(int i=0;i<2;i++)
   {
   	s[i].printinfo();
   }
}
