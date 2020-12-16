//cpp_conceptss
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 string fn,sn;
 int i,j;
 cout<<"Enter First Name : ";
 cin>>fn;
 cout<<"Enter Second Name : ";
 cin>>sn;
 cout<<"\n\nAfter Striked Out : "<<endl; 
 for(i=0;i<fn.length();i++)
 {
  for(j=0;j<sn.length();j++)
  {
   if(fn[i]==sn[j])
   {
	fn[i]= NULL;
	sn[j]=NULL;
   }
   else
   {
   	i;
	j;
   }
  }
 }
 int count1 = 0;
 for(i=0;i<fn.length();i++)
 {
  cout<<fn[i];
  if(fn[i]!=NULL)
  {
    count1++;
  }
 } 
 cout<<"\n";
 int count2 = 0;
 for(j=0;j<sn.length();j++)
 {
  cout<<sn[j];
  if(sn[j]!=NULL)
  {
    count2++;
  }
 } 
 int count;
 count = count1 + count2;
 cout<<"\n\nIts Count : "<<count;
 cout<<"\n";
 switch(count)
	{
		case 3:case 5:case 14:case 16:
			cout<<"\nFLAMES : Friendship";
			break;
		case 10:case 19:
			cout<<"\nFLAMES : Love";
		    break;
		case 8:case 12:case 13:case 17:
			cout<<"\nFLAMES : Affection";
		    break;
		case 6:case 11:case 15:
			cout<<"\nFLAMES : Marriage";
			break;
		case 2:case 4:case 7:case 9:case 20:
			cout<<"\nFLAMES : Enemy";
			break;
		case 1:
			cout<<"\nFLAMES : Siblings";
			break;
		default:
			cout<<"Invalid !";
	}
 getch();
 return 0;
}
