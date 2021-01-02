// @cpp_conceptss
#include<iostream>
using namespace std;

int main()
{
   int i=1,table,limit,result;
   double div;
   char operatr;
   cout<<"Enter limit : ";
   cin>>limit;
   cout<<"\nEnter Operation : ";
   cin>>operatr;
   cout<<"\nEnter table : ";
   cin>>table;
   cout<<"\n";
   for(i=1;i<=limit;i++)
   {
       switch(operatr)
       {
          case '+' : result=i+table;
                       cout<<"\n";
                       cout<<i<<"+"<<table<<"="<<result;
                       break;
          case '-' :  result=i-table;
                       cout<<"\n";
                       cout<<i<<"-"<<table<<"="<<result;
                       break;
          case '*' : result=i*table;
                       cout<<"\n";
                       cout<<i<<"*"<<table<<"="<<result;
                       break;
          case '/' : div=i/table;
                      cout<<"\n";
                      cout<<i<<"/"<<table<<"="<<div;
                      break;
          default :  cout<<"Expression Error !";
                       
       }
   }
}
