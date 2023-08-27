#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char s[20]="srinath",r[20];
int l,i,n=65;
l=strlen(s);
for(i=0;i<=l;)
{
if(s[i]!=char(n))
{
n++;
}
if(s[i]==char(n))
{
  r[i]=s[i];
cout<<r<<endl;
n=65;
i++;
}
}
return 0;
}