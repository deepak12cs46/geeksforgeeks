#include<iostream>
#include<algorithm>
using namespace std;
class find_number
{
public:
     int no_of_element1,no_of_element2,sum,*a,*b;
     find_number(int n1,int n2)
     {    int i;
          no_of_element1=n1;
          no_of_element2=n2;
          a=new int[n1];
          b=new int[n2];
          for(i=0;i<n1;i++)
          cin>>a[i];
           for(i=0;i<n2;i++)
          cin>>b[i];
          cout<<"\n\n\ninside constructor\n";
          process();
     }
     public:   void process();
};
void find_number :: process()
{
     int afill=0,aunfill=0,bfill=0;
     while(afill<no_of_element1)
     {
          while(a[aunfill]!=-1)    aunfill++;
          while(a[afill]<b[bfill] && afill<n)  afill++;
          if(a[afill]>b[bfill]) {a[aunfill]=a[afill]   }
     }
}
int main()
{
     find_number f(10,6);
     return 0;
}

