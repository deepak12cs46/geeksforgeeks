#include<iostream>///KADANE'S algorithm with support of negative numbers
#include<algorithm>
using namespace std;
class find_largest_sum
{
public:
     int no_of_element,*a;
     find_largest_sum(int n)
     {    int i;
          no_of_element=n;
          a=new int[n];
          for(i=0;i<n;i++)
          cin>>a[i];
          cout<<"\n\n\ninside constructor\n";
          process();
     }
     public:   void process();
};
void find_largest_sum :: process()
{    int i,result,curr_sum,max_sum;
  /// first check if all numbers are negative
  bool flag=false;
  max_sum=curr_sum=0;
  for(i=0;i<no_of_element;i++)
  if(a[i]>=0) {flag=true; break;}
  if(flag)/// now apply kadane algorithm
  {  cout<<" ALL ELEMENTS ARE not NEGATIVE      "<<endl;
       for(i=0;i<no_of_element;i++)
       {
            curr_sum=curr_sum+a[i];
            if(curr_sum<0) curr_sum=0;
            if(max_sum<curr_sum)   max_sum=curr_sum;
       }
}
  else
  {  max_sum=a[0];
  cout<<" ALL ELEMENTS ARE NEGATIVE      "<<endl;
       for(i=1;i<no_of_element;i++)
        if(max_sum<a[i])   max_sum=a[i];
}
   cout<<"MAX SUM CONTIGUOUS SUBARRAY IS   -->"<<max_sum<<endl;
}
int main()
{
     find_largest_sum f(5);
     return 0;
}
