#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,a,y,p,count,b;
	float res=1;
	cout<<"1.factorial. ";
	cout<<"2.odd/even. ";
	cout<<"3.prime. ";
	cout<<"4.raise of power. ";
	cout<<"5.square root. ";
	cout<<"enter the number for operation: ";
	cin>>y;
	switch(y)
	{
		case 1:
			cout<<"enter the number for factorial: ";
			cin>>a;
			for(i=0;i<=a;i++)
				res=res*i;
			cout<<"the factorial of the number will b: "<<res<<endl;
		break;
		case 2:
			cout<<"enter the number: ";
			cin>>a;
			if(a%2==!0)
			{
				cout<<"number is odd: ";
				
			}
			else
				cout<<"number is even: ";
		break;
		case 3:
			cout<<"enter the number: ";
			cin>>a;
			for(i=0;i<=a;i++)
			{
				if(a%=0)
				{
				count= count +1;
				
					
				}
				if(count==2)
				{
					cout<<"numberis prime: ";
					
				}
				else
				cout<<"not prime: ";
			}
		break;
		case 4:
		      cout<<"enter the base number: ";
			  cin>>a;	
			  cout<<"enter the power number: ";
			  cin>>p;
			  for(i=0;i<=p;i++)
			  {
			  	res=res*b;
			  	cout<<"the number will be: "<<res;
			  }
		break;
		case 5:
			  cout<<"enter the number to square: ";
			  cin>>a;
			  res= sqrt(a);
			  cout<<"the square will be: "<<res;
		break;
	       
	}
		return 0;
}
