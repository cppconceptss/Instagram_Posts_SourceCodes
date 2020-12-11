//cpp_conceptss
#include <iostream>
using namespace std;

class factorial
{
   public:
   int nstart, fstart,N;
   factorial()
   {
      nstart = 1, fstart= 1;
      cout << "Enter a number : ";
      cin>>N;
   }
   factorial(factorial &access )
   { 
     while ( access.nstart <= access.N) 
     {
        access.fstart *= access.nstart;
        ++access.nstart;
     }
   }
  cout<<"\nFactorial of "<<access.N <<" = "<< access.fstart;
};
int main()
{
   factorial ob; factorial access(ob);
   return 0;
}
