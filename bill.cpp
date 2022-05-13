#include<bits/stdc++.h>
using namespace std;
int main()
{
	int current_red,prev_red,n,a=10;
	cout<<"enter the current reading of the meter: ";
	cin>>current_red;
	cout<<"enter the previos reading of the meter: ";
	cin>>prev_red;
	n=current_red-prev_red;
	cout<<"so the unit will be: "<<n<<endl;
	cout<<"the amount to pay will be: "<<a*n;
	
	
	
}
