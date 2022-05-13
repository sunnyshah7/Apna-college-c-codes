#include<bits/stdc++.h>
using namespace std;
class a1{
		public:
		void getdata()
		{
			int a,b,res;
			char z;
			cout<<"enter the two elment: "<<endl;
			cin>>a>>b;
			cout<<"enter the operation: "<<endl;
			cin>>z;
			switch(z)
 			{
 				case'+':
 					res=a+b;
 					break;
 				case'-':
 				  res=a-b;
 				  break;
 				case'*':
 				   res=a*b;
 				   break;
 				case'/':
 				  res=a/b;
 				  break;     	
 			}
			cout<<res;
			
		}
};

int main()
{
	a1 a3;
	a3.getdata();
//	a3.op();
}
