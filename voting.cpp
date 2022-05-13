#include<bits/stdc++.h>
using namespace std;
int vote(int age)
{
	if(age>=18)
	{
		cout<<"Eligible: ";
	}
	else
	cout<<"not eligible: ";
}
 int main()
 {
 	int age ;
 	cin>>age;
 	vote(age);
 	return 0;
 }
