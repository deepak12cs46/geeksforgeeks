#include<iostream>
#include<algorithm>
using namespace std;
class find_number
{
public:
     int no_of_element,*a;
     find_number(int n)
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
void find_number :: process()
{    int i,result=0,sum;
    sum=(no_of_element+1)*(no_of_element+2)/2;
    for(i=0;i<no_of_element;i++)
          result=result+a[i];
          result=sum-result;
     cout<<"MISSING NUMBER IS ----->"<<result<<endl;
}
int main()
{
     find_number f(4);
     return 0;
}

