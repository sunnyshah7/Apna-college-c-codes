#include<bits/stdc++.h>
#include<string>
using namespace std;
bool isPrime(int n)
{

    if (n <= 1)
        return false;
  
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}
int main()
{
	int n;
	cin>>n;
	int rem=0;
	while(n>0)
	{
		int last=n%10;
		if(isPrime(last))
		{
			rem+=last;
		}
		n/=10;
	}
	cout<<rem;
}
