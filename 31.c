#include<stdio.h>
#include<string.h>
int main(void)
{	
char str[80];
int i=0, len, j;
gets(str);
len=strlen(str);
for(i=0; i<len; i++)
{
if(str[i]==' ')
{
for(j=i; j<len; j++)
{
str[j]=str[j+1];
}
len--;
}
}
printf("%d",len);
return 0;
}
