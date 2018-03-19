#include <stdio.h>
#include<string.h>
int main()
{
char c[100];
gets(c);
int k,i,temp=0,temp1=0,temp2=0;
k=strlen(c);
for(i=0;i<k;i++)
{
if(c[i]>='a'&&c[i]<='z')
temp++;
else if(c[i]>='A'||c[i]<='Z')
temp1++;
if(c[i]>='0'||c[i]<='9')
temp2++;
}
if(temp!=0&&temp1!=0&&temp2!=0)
printf("yes");
else
printf("no");
return 0;
}
