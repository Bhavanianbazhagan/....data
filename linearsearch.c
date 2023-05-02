#include<stdio.h>
int main()
{
int size,arr[50],se,i;
printf("enter the size of array:");
scanf("%d",&size);
printf("enter the elements in array:");
for(i=0;i<size;i++)
{
	scanf("%d",&arr[i]);
}
printf("enter the search element:");
scanf("%d",&se);
for(i=0;i<size;i++)
{
	if(se==arr[i])
	{
		printf("element is identified at position : %d",i);
	}
}
int result=i;
		 if(result==-1)
		 {
			printf("element not identified");
		 }
}
