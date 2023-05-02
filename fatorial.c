#include<stdio.h>
int main()
{
	int fact,a,i;
	printf("enter a number:");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		fact=fact*i;
	}
	printf("the factorial is %d",fact);
}
