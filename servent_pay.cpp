#include<bits/stdc++.h>
using namespace std;
int main()
{
	int total,hours, rate, overtime,pay;
	cout<<"enter the hours: ";
	cin>>hours;
	cout<<"enter the rates: ";
	cin>>rate;
	if(hours> 40)
	{
		overtime=hours-40;
		pay=overtime*2*rate;
		total=pay+(rate*hours);
		
	}
	else
		total= rate*hours;
	cout<<"amount to pay: "<<total;
return 0;
}
