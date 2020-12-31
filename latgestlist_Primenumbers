// @cpp_conceptss
#include<iostream>
using namespace std;

int list_prime(int n)
{    
    int i;
    cout<<"\n";
    if(n<2)
    {
        cout<<"Summation not possible\n";
    }
    else if(n%2==0)            
    {
        for(i=1;i<=n/2;i++)
        {
            cout<<2<<" ";
        }
    }
    else
    {
        n=n-3;
        for(i=1;i<=n/2;i++)    
        cout<<2<<" ";
        cout<<3<<" ";
    }
}
int main()
{
    int i,n;
    cout<<"Enter a number :";
    cin>>n;
    list_prime(n);
  return 0;
}
