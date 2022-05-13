#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int first,second,third;
	third = first = second = INT_MIN;
	 if (a > first)
        {
            third = second;
            second = first;
            first = a;
        }
         else if (a > second)
        {
            third = second;
            second = b;
        }
  
        else if ( a> third)
            third = c;
    
	cout<<first<<second<<third;
}
