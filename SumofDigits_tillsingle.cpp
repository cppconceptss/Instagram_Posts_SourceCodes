// @cpp_conceptss
#include <iostream>
using namespace std;

class get
{
  public:
  int number;
  void input()
  {
     cin>>number;
  }
};
class solve : public get
{
  public:
  int res;
  void get()
  {
     if(number)
     {
        res = number % 9 == 0 ? 9 : number % 9 ;
     }
     else 
     {
        res = 0;
     }
  }
};
class put : public solve
{
   public:
   void solve()
   {
      cout<<res;
   }
};
int main()
{
    put ob;
    ob.input();
    ob.get();
    ob.solve();
    return 0;
}
