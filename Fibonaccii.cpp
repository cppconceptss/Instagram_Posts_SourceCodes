// cpp_conceptss - Instagram_Posts_SourceCodes
#include <iostream>
using namespace std;
int i, fnumber =0, snumber=1, fsadd;
void add()
{
fsadd = fnumber + snumber;
}
void add(int limit)
{
cout<<"0 1";
for (i=1;i<limit-1;i++)
  {
     cout<<" "<<fsadd;
     fnumber = snumber;
     snumber=fsadd;
     fsadd = fnumber + snumber;
  }
}
int main()
{
    add();
    add(20);
    return 0;
}
