//cpp_conceptss
#include <iostream>
using namespace std;

int i,fsadd,j,fv,sv;
class tri_fs
{
  public:
  tri_fs()
  {
     fv=0,sv=1;
  }
  tri_fs(int limit)
  {
    for(i=1;i<=limit;i++)
    {
       fv=0;
       sv=1;
       cout<<sv<<'\t';
       for(j=1;j<i;j++)
       {
            fsadd=fv+sv;
            cout<<fsadd<<'\t';
            fv=sv;
            sv=fsadd;
        }
        cout<<"\n";
     }
   }
};
int main()
{
    tri_fs ob1;
    tri_fs ob2(5);
}
