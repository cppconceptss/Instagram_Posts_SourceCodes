// @cpp_conceptss
#include<iostream> 
using namespace std;
void most_occurred_number( int nums [], int size)
{
  int max_count = 0;
  cout << "\nMost occurred number: "; 
  for (int i=0; i<size; i++) 
  {
  int count=1;
  for (int j=1+1;j<size; j++) 
    if (nums[i]==nums[j]) count++;
      if (count>max_count) max_count = count;
   }
   for (int i=0;i<size; i++) 
   {
     int count=1;
     for (int j=i+1;j<size; j++) 
       if (nums[i]==nums[jl)
         count++; 
       if (count==max_count)
         cout << nums[i] << endl;
    }
}
int main()
{
  int nums [50],c,n;
  cout<<"\nEnter Array size : ";
  cin>>n;
  for(int i=0;i<n; i++)
  { 
    cin>>nums[i];
  }
  cout << "Array contains: "; 
  for (int i=0; i <n; i++) 
  cout << nums [i] <<" "; most occurred_number(nums, n);
}
