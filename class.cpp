#include<bits/stdc++.h>
using namespace std;
class student
{
	public:
	string name;
	int age;
	bool gender;
	
	void printinfo()
	{
		cout<<"name: "<<name<<endl;
		cout<<"age: "<<age<<endl;
		cout<<"gender: "<<gender<<endl;
	}
	student()
	{
		cout<<"default constructor is called "<<endl;
	}
	student(string s,int a,bool g)//parametrized constructor
	{
	  name=s;	
	  age=a;
	  gender=g;
	}
	student(student &a)
	{
		cout<<"copy constructor is called: "<<endl;
		name=a.name;
		age=a.age;
		gender=a.gender;
	}
	~student()
	{
	  cout<<"destructor is called: "<<endl;
	}
};
int main()
{
//	student arr[3];
//	for(int i=0;i<3;i++)
//	{
//		cout<<"name: ";
//		cin>>arr[i].name;
//		cout<<"age: ";
//		cin>>arr[i].age;
//		cout<<"gender: ";
//		cin>>arr[i].gender;
//	}
//	for(int i=0;i<3;i++)
//	{
//		arr[i].printinfo();
//	}
    student b;
	student a("sunny",21,0);
//	a.printinfo();
	student c=a;

}
