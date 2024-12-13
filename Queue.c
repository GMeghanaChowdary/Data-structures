#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int q[MAX],f=-1,r=-1;
void insert();
void rem();
void display();
main()
{
	int ch;
	do
	{
		printf("1.Insert\n2.Remove\n3.Display\n4.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert();
			    break;
			case 2:rem();
			     break;
			case 3:display();
			     break;
			case 4:exit(0);
			default: printf("invalid choice");
	    }
	}while(ch!=4);
	return(0);
}
void insert()
{
	int e;
	if(r==MAX-1)
	{
		printf("Queue is full");
		return;
	}
	printf("Enter the element to be inserted:");
	scanf("%d",&e);
	r=r+1;
	q[r]=e;
	if(f==-1)
	f=0;
}
void rem()
{
	int e;
	if(f==-1)
	{
		printf("Queue is empty");
		return;
	}
	e=q[f];
	if(f==r)
		f=r=-1;
	else
	    f=f+1;
	printf("deleted element is:%d",e);
}
void display()
{
	int i;
	if(f==-1)
	{
		printf("Queue is empty");
		return;
	}
	printf("Elements of queue are:");
	for(i=f;i<=r;i++)
	 printf("%d",q[i]);
}
