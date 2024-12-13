#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int a[MAX],num,key,i;
int create(int);
void linear_prob(int[], int, int);
void display(int[]);
int main()
{
	int j;
	printf("\ncollision handling by linear probing");
	for(i=10;i<MAX;i++)
		a[i]=-1;
	do
	{
		printf("enter four digit number:");
		scanf("%d",&num);
		key=create(num);
		linear_prob(a,key,num);
		printf("\ndo you want to continue ? (0/1)");
		scanf("%d",&j);
	}while(j==1);	
	display(a);
	return 0;
}
int create(int num)
{
	key=num%100;
	return key;
}
void linear_prob(int a[MAX],int key,int num)
{
	int flag,count;
	flag=count=0;
	if(a[key]==-1)
		a[key]=num;
	else
		{
			i=10;
				while(i<MAX-10)
					{
						if(a[i]!=-1)
							count++;
						i++;
					}
				if(count==MAX-10)
					{
						printf("\nhash table is full");
						display(a);
						exit(1);
					}
				for(i=key+1;i<MAX;i++)
					{
						if(a[i]==-1)
							{
								a[i]=num;
								flag=1;
								break;
							}
					}	
				for(i=10;i<key&&flag==0;i++)
					{
						if(a[i]==-1)
							{
								a[i]=num;
								flag=1;
								break;
							}	
					}
		}
}
void display(int a[MAX])
{
	printf("\nthe hash table is...\n");
	for(i=10;i<MAX;i++)
		printf("\n %d  %d",i,a[i]);
}
