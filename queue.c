#include<stdio.h>
#include<conio.h>
#define size 10
void enqueue(int);
void dequeue();
void display();

void main()
{
	int value,choice,rear;
	clrscr();
	while(1)
	{
		printf("\n\n*** Menu***\n\n");
		printf("1.insert\n 2.delete\n3.display\n4.exit");
		printf("\n enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("enter the value to be insert:");
				scanf("%d",&value);
				enqueue(value);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
		    default:
		    	printf("\n wrong selection....");
		}
	}
}
void enqueue(int value)
{
	if(rear==size-1)
	{
		printf("\n queue is full");
	}
	else
	{
		if(front==-1)
		{
			front=0;
			rear++;
			queue[rear]=value;
			printf("\n insertion successful");
		}
	}
	
}
void dequeue()
{
	if(front==rear)
	{
		printf("queue is empty");
	}
	else
	{
		printf("\n deleted: %d",queue[front]);
		front++;
		if(front==rear)
		   front=rear=-1;
	}
}
void display()
{
	if(rear==-1)
	{
		printf("\n queue is empty");
	}
	else
	{
		int i;
		printf("\n queue elements are: \n");
		for(i=front;i<=rear;i++)
		{
			printf("%d",queue[i]);
		}
	}
}
