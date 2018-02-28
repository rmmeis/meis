#include <stdio.h>
#include<string.h>
int main(void)
{
char c[100];
int i,k,count=0;
printf("enter the statement\n");
scanf("%s",&c);
for(k=0;c[k]!='\0';++k)
{
}
for(i=0;i<k;i++)
{
if(c[i]==','||c[i]==' '||c[i]=='.'||c[i]=='!'||c[i]=='%'||c[i]=='&')
count++;
}
printf("%d",count);
return 0;
}
