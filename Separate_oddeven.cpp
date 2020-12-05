// @cpp_conceptss -  Instagram_Posts_SourceCodes
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
      int numbers[100],i,n,count=0;
      cout<<"Enter How Many Numbers to Handle : ";
      cin>>n;
      cout<<"\nEnter the Numbers : ";
      for(i=0;i<n;i++)
      {
            cin>>numbers[i];   
      }
      cout<<"\nEven Numbers are : ";
      for(i=0;i<n;i++)
      {
            if(numbers[i]%2==0)
            {
                cout<<"\n"<<numbers[i]; 
                count++;
            }
      }
      cout<<"\nIts Count : "<<count;
      count=0;
      cout<<"\nOdd Numbers are : ";
      for(i=0;i<n;i++)
      {
            if(numbers[i]%2==1)
            {
                cout<<"\n"<<numbers[i];
                count++;
            }
      }
      cout<<"\nIts Count : "<<count;
      getch();
      return 0;
}
