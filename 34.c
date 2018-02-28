#include<stdio.h>
int main()
{
char s[100];
int a=0;
scanf("%s",s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]=='.')
a++;
}
printf("\nlines=%d",a);
return 0;
}
