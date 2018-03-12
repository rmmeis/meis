include<stdio.h>
int main()
{
long int a,count=0;
scanf("%ld",&a);
while(a!=0)
{
a=a/10;
count++;
}
printf("%ld,count);
return 0;
}
