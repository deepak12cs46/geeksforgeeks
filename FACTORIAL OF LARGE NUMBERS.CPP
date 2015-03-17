#include<iostream>
#include<algorithm>
using namespace std;
class factorial
{
public:
     int n,sum,*a;
     factorial(int n)
     {    int i;
          n=n;
          a=new int[200];
          a[0]=1;
          for(i=1;i<200;i++)
         a[i]=0;
          cout<<"\n\n\ninside constructor\n";
          process();
     }
     public:   void process();
};
void factorial :: process()
{    int m,temp,carry=0,i;
     for(m=2;m<=100;m++)
     {
          for(i=0;i<200;i++)
          {
               temp=a[i]*m+carry;
               a[i]=temp%10;
               carry=temp/10;
          }
          for(i=199;i>=0;i--)
     {
          if(a[i]!=0)    break;
     }
     for(;i>=0;i--)
          cout<<a[i];
     cout<<endl;
     }


}
int main()
{
     factorial f(100);
     return 0;
}

