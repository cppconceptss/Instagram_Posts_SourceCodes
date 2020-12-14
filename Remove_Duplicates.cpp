//cpp_conceptss
#include <iostream> 
#include <string.h>
using namespace std;

int main() 
{     
  char word[100];     
  int i, j, k;     
  cout<<"Enter a Word : "; 
     cin>>word;
     for(i = 0; i < strlen(word); i++) 
     {         
    for(j = i + 1; word[j] != '\0'; j++)         
    {         
       if(word[j] == word[i])             
       {                 
         for(k = j; word[k] != '\0'; k++)             
         {                     
            word[k] = word[k + 1];                 
         }             
      }         
   }     
 }      
     cout<<"\nAfter Removing duplicates, the Word is :  "<<word;     
 int count=0;
 for(i=0;i<word[i];i++)
 {
      count++;
 }
 cout<<"\nIts Count : "<<count;
     return 0; 
}
