// @cpp_conceptss - Instagram_Posts_SourceCodes
#include <iostream>
using namespace std;

class prime_print
{
   public: 
   int i,temp;
   prime_print(int from,int to)
   {
	 while (from<to) 
	 {
        temp=0;
        for (i = 2; i <= from / 2; ++i) 
		{
            if (from % i == 0) 
            {
			    temp = 1;
                break;
            }
        }
        if (temp== 0)
        cout<<from<<"\n";
        ++from;
      }
   }
};
int main()
{
   prime_print access(1,20);
   return 0;
}
