// @cpp_conceptss
#include<iostream>
using namespace std;
int a,b,c;
void AND()
{
	
	cout<<"\nEnter A :- ";
	cin>>a;
	cout<<"\nEnter B :- ";
	cin>>b;
	c=a*b;
	if((a==0||a==1)&&(b==0||b==1))
	{
		cout<<"\nOUTPUT :- "<<c;
	}
	else
	{
		cout<<"\n0's and 1's only allowed !";
	}
}
void OR()
{
	cout<<"\nEnter A :- ";
	cin>>a;
	cout<<"\nEnter B :- ";
	cin>>b;
	c=a+b;
	if((a==0||a==1)&&(b==0||b==1))
	{
		if((a==1)&&(b==1))
		{
			int d=1,e=1,f;
			f=(d+e)-1;
			cout<<"\nOUTPUT :- "<<f;
		}
		else if((a==0||a==1)&&(b==0||b==1))
		{
			cout<<"\nOUTPUT :- "<<c;
		}
	}
	else
	{
		cout<<"\n0's and 1's only allowed !";
	}
}
void NOT()
{
	cout<<"\nEnter A :- ";
	cin>>a;
	switch(a)
	{
		case 0 : a+=1;
		         cout<<"\nOUTPUT :- "<<a;
		         break;
		         
		case 1 : a-=a;
		         cout<<"\nOUTPUT :- "<<a;
		         break;
		    
		default : cout<<"\n0's and 1's only allowed !";
	}
}
int main()
{
	cout<<"1.AND";
	cout<<"\n2.OR";
	cout<<"\n3.NOT";
	int choice;
	cout<<"\n\nChoose Operation to perform : ";
	cin>>choice;
	switch(choice)
	{
		case 1 : cout<<"\nAND GATE ..";
		         AND();
		         break;
		
		case 2 : cout<<"\nOR GATE ..";
		         OR();
		         break;
		        
		case 3 : cout<<"\nNOT GATE ..";
		         NOT();
		         break;
		
		default : cout<<"\nInvalid option !";
	}
}
