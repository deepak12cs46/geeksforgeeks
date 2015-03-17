#include<iostream>
#include<algorithm>
using namespace std;
bool f1(const int & a,const int & b)    {    return a<b;    }
class find_pair
{
public:
     int no_of_element,sum,*a;
     find_pair(int n,int x)
     {    int i;
          no_of_element=n;
          sum=x;
          a=new int[n];
          for(i=0;i<n;i++)
          cin>>a[i];
          cout<<"\n\n\ninside constructor\n";
          process();
     }
     public:   void process();
};
void find_pair :: process()
{    int i,index,start=0,end=no_of_element;
bool flag=false;
      cout<<"after sorting"<<endl;
            sort(a,a+no_of_element,f1);
       for(i=0;i<no_of_element;i++)
          cout<<a[i]<<endl;
     while(start<end)
     {
          if(a[start]+a[end]==sum) {cout<<"YES.... FOUND A MATCH\n";  flag=true;  break;}
          else if (a[start]+a[end]>sum)   end--;
          else if(a[start]+a[end]<sum)    start++;
          else continue;
     }
     if(!flag) cout<<"not found....."<<endl;
}
int main()
{
     find_pair f(5,14),g(4,28),h(3,57),j(4,39),k(2,68);
     return 0;
}
