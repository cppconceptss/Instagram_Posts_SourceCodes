//@cpp_conceptss
#include<iostream> 
using namespace std; 
int main() 
{     
   int i, j; 
   for(i=1; i<=5; i++) 
   { 
      for(j=1; j<=i; j++) 
      { 
        if(j==1 || j==i || i==5) 
        { 
           cout<< "*"; 
        } 
        else 
        { 
               cout << "  "; 
        } 
     }
      cout <<endl; 
   }
    return 0;
}
