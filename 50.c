#include<stdio.h>
int main()
{
int a,temp,count=0,x=1,pow=2;
scanf("%d",&n);
temp=a;
while(a!=1)
{
a=a/2;
count++;
}
for(int i=0;i<count;i++)
{
x=x*pow;
}
if(x==temp)
printf("yes");
else
printf("no");
return 0;
}
