#include <stdio.h>
int main() 
{	
char ch[100];
int i,k,count=1;
scanf("%[^\n]s",ch);
for(k=0;ch[k]!='\0';++k)
{
}
for(i=0;i<k;i++)
{
if(ch[i]==' '||ch[i]=='/n'||ch[i]=='\t')
{
count++;
}
}
printf("%d",count);
return 0;
}
