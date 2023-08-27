#include<iostream>
using namespace std;
int main()
{
 int s[100];
 int n,r,i=0,j,l=0,a,b;
 char c;
 cout<<"\n Enter Dec = ";cin>>n;
 while(n!=0)
{
 r=n%16;
 if(r>=10)
{
  a=65;
  b=10;
  while(r!=b)
  {
    a++;
    b++;
  }
  s[i]=a;
}
else
{
 s[i]=r;
}
n=n/16;
 i++;
 l++;
}
cout<<"\n Oct = ";
for(i=l-1;i>=0;i--)
{
if(s[i]>=65)
{
c=s[i];
cout<<c;
}
else
cout<<s[i];
}
cout<<"\n"<<endl;
 return 0;
}