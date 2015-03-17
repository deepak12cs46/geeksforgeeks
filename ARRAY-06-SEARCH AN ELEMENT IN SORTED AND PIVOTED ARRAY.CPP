#include<iostream>
#include<algorithm>
using namespace std;
class find_number
{
public:
     int no_of_element,s,*a,first;
     find_number(int n)
     {    int i;
          no_of_element=n;
          a=new int[n];
          for(i=0;i<n;i++)
          cin>>a[i];
          cin>>s;
          first=a[0];
          cout<<"\n\n\ninside constructor\n";
          process();
     }
     public:   void process();
    int findpivot(int,int,int);
    int binsearch(int,int,int);
};
void find_number :: process()
{    int i,first,index,pivot;
    first=a[0];
    cout<<" check 1 "<<endl;
    pivot=findpivot(0,no_of_element-1,first);
    cout<<" check 2 "<<endl;
     if(a[pivot]==s) index=pivot;
     else {
    if(pivot==-1)   index=binsearch(0,no_of_element-1,s);
    else {cout<<"index  "<<index<<endl;
    if(s>=first)
          index=binsearch(0,pivot-1,s);

  else  index=binsearch(pivot+1,no_of_element-1,s);

    }
     }
    if(index==-1)
     cout<<" element not found in array "<<endl;
    else cout<<"element found at index "<<index<<endl;

}
int find_number :: findpivot(int start,int end,int first)
{    if(end>start){
     int mid=start+(end-start)/2;
     if(mid!=no_of_element-1 && a[mid]>a[mid+1])
          return mid;
    if(a[mid]>first ) return findpivot(mid+1,end,first);
    if(a[mid]<first) return findpivot(start,mid-1,first);
}
else
    return -1;
}

int find_number :: binsearch(int start,int end,int s)
{    if(end>start)  {
     int mid=start+(end-start)/2;
     if(a[mid]==s) return mid;
     if(a[mid]<s) return binsearch(mid+1,end,s);
     if(a[mid]>s) return binsearch(start,mid-1,s);
}
else
     return -1;
}
int main()
{    int n;
cin>>n;
     find_number f(n);
     return 0;
}

