//cpp_conceptss
#include<iostream>
using namespace std;

void swapThree(int &a,int &b,int &c)
{
	a=a+b+c;
	b=a-(b+c);
	c=a-(b+c);
	a=a-(b+c);
	cout<<"\nAfter Swapped :: a="<<a<<", b="<<b<<", c="<<c;
}
int main()
{
	int a,b,c,*d,*e,*f;
	cout<<"Enter a = ";
	d=&a;
	cin>>*d;
	cout<<"\nEnter b = ";
	e=&b;
	cin>>*e;
	cout<<"\nEnter c = ";
	f=&c;
	cin>>*f;
	swapThree(*d,*e,*f);
	return 0;
}
