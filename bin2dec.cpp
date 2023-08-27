#include<iostream>
#include<math.h>
using namespace std;
int main()
{
 int s[20];
 int i=0,n,l=0,p=0,a=0;
 Top:
 cout<<"\n Enter bin = ";cin>>n;
 while(n!=0)
{
 s[i]=n%10;
 n=n/10;
 i++;
 l++;
}
 for(i=0;i<l;i++)
{
 if(s[i]==0||s[i]==1)
 {
 if(s[i]==0)
    {
  p++;
    }
 else 
    {
 a=a+pow(2,p);
 p++;
    }
 }
else
 {
 cout<<"\n Invalid number"<<endl;
 goto Top;
 }
}
 cout<<"\n Dec ="<<a<<endl;
 return 0;
}    