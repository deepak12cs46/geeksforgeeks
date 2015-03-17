#include <iostream>/// moore's voting algorithm
#include <algorithm>
using namespace std;
class find_majority1
{
public:
     int no_of_element,*a;
      find_majority1(int n)
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
void find_majority1 :: process()
{   int i,majority_element,cnt;
cnt=0;
majority_element=a[0];
for(i=1;i<no_of_element;i++)
{
     if(a[i]==majority_element)    cnt++;
     else {    if(cnt>0)  cnt--;      else  majority_element=a[i];  }
}
cnt=0;
for(i=0;i<no_of_element;i++)
{
     if(a[i]==majority_element)    cnt++;
}
if(cnt>no_of_element/2)
     cout<<"  YES................. WE FOUND MAJORITY ELEMENT AND IT IS ----- "<<majority_element<<endl;
else cout<<"OOOOOOOPS.... NO MAJORITY ELEMENT"<<endl;
}
///-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 class find_majority2
{
public:
     int no_of_element,*a,majority_element;
find_majority2(int n)
     {    int i;
          no_of_element=n;
          a=new int[n];
          for(i=0;i<n;i++)
          cin>>a[i];
          majority_element=a[0];
          cout<<"\n\n\ninside constructor\n";
          process();
          check();
     }
     public:   void process();
                         void check();
};
void find_majority2 :: process()
{   int i,cnt=0;
for(i=1;i<no_of_element;i++)
{
     if(a[i]==majority_element)    cnt++;         else {    if(cnt>0)  cnt--;      else  majority_element=a[i];  }
}    }
void find_majority2 :: check()
{    int i,cnt=0;
for(i=0;i<no_of_element;i++)
{
     if(a[i]==majority_element)    cnt++;
}
if(cnt>no_of_element/2)  cout<<"  YES................. WE FOUND MAJORITY ELEMENT AND IT IS ----- "<<majority_element<<endl;
else cout<<"OOOOOOOPS.... NO MAJORITY ELEMENT"<<endl;
}
///------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 class bst
     {    public:
          int data,cnt;
          class bst *rit,*lft;
     };
class find_majority3
{
public:
     int no_of_element,majority_element;
      public:
     find_majority3(int n)
     {    int i;
          no_of_element=n;
     cout<<"\n\n\ninside constructor find majority3\n";
     bst *root=new bst;
cin>>root->data;
root->rit=root->lft=NULL;
root->cnt=1;
no_of_element--;
while(no_of_element>0)
     insrt(root);
     ///display(root);
      no_of_element=n;
     process(root);
     }
     public:
     void insrt(bst *);
     void display(bst *);
     void process(bst *);
    };
void find_majority3 :: insrt(bst * root)
{    bst *pretemp;
     bst *temp=new bst;
  cin>>temp->data;
temp->rit=temp->lft=NULL;
temp->cnt=1;
no_of_element--;
bst * temp1=root;
while(1){
          if(temp->data==temp1->data) {temp1->cnt++;   free(temp); break;}
if(temp->data>temp1->data)
     {    pretemp=temp1;
          temp1=temp1->rit;
     if(!temp1)   { pretemp->rit=temp;     break;}
     }
else ///if(temp->data<temp1->data)
     {    pretemp=temp1;
          temp1=temp1->lft;
     if(!temp1)   { pretemp->lft=temp;    break;}
     }
     }
}
void find_majority3 :: display(bst  * node)
{
     if(node)
     {
          display(node->lft);
          cout<<"displaying data   "<<node->data<<"\tdisplaying count   "<<node->cnt<<endl;
         display(node->rit);
     }
}
void find_majority3 :: process(bst  * node)
{
     if(node)
     {
          process(node->lft);
          if(node->cnt>no_of_element/2)      cout<<"total number of  elements are "<<no_of_element<<" in which  "<<node->data<<"  IS MAJORITY ELEMENT with number of occurence "<<node->cnt<<endl;
         process(node->rit);
     }
}
int main()
{
find_majority1 f1(5),g1(4),h1(3),j1(4),k1(2);/// moore's voting algorithm without separate check function
find_majority2 f2(5),g2(4),h2(3),j2(4),k2(2);/// moore's voting algorithm with        separate check function
find_majority3 f3(5),g3(4),h3(3),j3(4),k3(2);/// using binary search tree technic
return 0;
}

