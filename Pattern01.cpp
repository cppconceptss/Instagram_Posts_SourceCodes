// @cpp_conceptss - Instagram_Posts_SourceCodes
#include<iostream>
using namespace std;
int main()
{ 
int i, j, k; 
for(i=5;i>=1; i--)
{
for(j=1;j<i;j++)
{
  cout<<"  ";
}
for(k=5;k>=i;k--)
{
cout<<"*";
}
cout << endl;
}
return 0;
}
