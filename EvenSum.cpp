#include <iostream>
#include<conio.h>
using namespace std;
int main() 
{
    int a[50],r,n,i;
    cout<<"Enter How Many Numbers to Handle : ";
    cin>>n;
    cout<<"\nEnter the Numbers : ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"\nThe sum of even numbers are : ";
    for(i=0;i<n;i++)
    {
       if(a[i]%2==0)
       {
          r=r+a[i];
       }
       else
       {
          i;
       }
    }
    cout<<r;
    getch();
    return 0;
}
