#include<iostream>
#include<algorithm>
using namespace std;
class find_number
{
public:
     int no_of_element,sum,*a;
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
{    int i,result;
    result=a[0];
    for(i=1;i<no_of_element;i++)
          result=result^a[i];
     cout<<"ELEMENT OCCURING ODD NUMBER OF TIMES IS ----->"<<result<<endl;
}
int main()
{
     find_number f(5);
     return 0;
}
