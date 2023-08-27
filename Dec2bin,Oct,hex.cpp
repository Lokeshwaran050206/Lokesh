#include<iostream>
using namespace std;
class convert
{
public:
int n,r,s[50],l=0,i=0,d;
void collect(int x,int y)
{
n=x;d=y;
while(n!=0)
{
r=n%d;
s[i]=r;
n=n/d;
l++;
i++;
}
cout<<"\n";
for(i=l-1;i>=0;i--)
cout<<s[i];
cout<<"\n"<<endl;
}

};
int main()
{
convert cc;
int op,a,b;
while(1)
{
cout<<"1.Dec 2 Bin"<<endl;
cout<<"2.Dec 2 Oct"<<endl;
cout<<"3.Dec 2 Hex"<<endl;
cout<<"4.Exit     "<<endl;
cout<<"Enter your choice = ";cin>>op;
switch(op)
{
  case 1:
  {
    cout<<"Enter Dec = ";cin>>a;
    cc.collect(a,2);
    break;
  }
  case 2:
  {
    cout<<"\n Enter Dec = ";cin>>a;
    cc.collect(a,8);
    break;
  }
  case 3:
  {
    cout<<"\n Enter Dec = ";cin>>a;
    cc.collect(a,16);
    break;
  }
  case 4:
  {
    return 0;
  }
  default:
 {
   cout<<"invalid choice"<<endl;
 }
}
}
}