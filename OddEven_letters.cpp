// @cppconceptss - Instagram_Posts_SourceCodes
#include <iostream>
using namespace std;

int i,let=0;
void oddeven(string word)
{
    cout<<"Even Letters from Words : ";
    for(i=0;i<word.length();i++)
    {
      if((int)word[i]%2==0)
      {
         cout<<"\n"<<word[i];
         cout<<"="<<(int)word[i];
         let++;
      }
    }
    let=0;
    cout<<"\n\nOdd Letters from Words : ";
    for(i=0;i<word.length();i++)
    {
      if((int)word[i]%2==1)
      {
         cout<<"\n"<<word[i];
         cout<<"="<<(int)word[i];
         let++;
      }
   }
}
int main()
{
    oddeven("cppconceptss");
}
