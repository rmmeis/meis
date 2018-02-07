#include<stdio.h>
int main()
{
	int a,b,t;
	printf("\n enter the value of a");
	scanf("%d",&a);
	printf("\n enter the value of b");
	scanf("%d",&b);
	printf("\n before swapping the values of a and b are %d %d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	return 0;
}
