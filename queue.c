#include<stdio.h>
void enqueue(int Q[],int size,int* FRONT,int* REAR)
{
	int ITEM;
	if((*REAR) < size - 1  )
	{
		if((*REAR == - 1) && (*FRONT == - 1))
		{	*FRONT = 0; }
		*REAR = *REAR + 1;
		printf("Enter Item\n"); // get item
		scanf("%d",&ITEM);
		Q[*REAR] = ITEM;
	}
	else
	{	printf("Queue Full\n");	}
}
void dequeue(int Q[],int size,int *FRONT,int *REAR)
{
	if(*FRONT == -1)
		printf("Queue Empty\n");
	else
	{
		int ITEM = Q[*FRONT];
		printf("%d removed from queue\n",ITEM);
		if(*FRONT == *REAR)
		{
			*REAR = -1;
			*FRONT = -1;
		}
		else
		{
			*FRONT = *FRONT + 1;			
		}
	}
}

int main()
{
	int size = 2,n=1,ch,FRONT=-1,REAR=-1;
	int Q[size];
	while(n)
	{
		printf("Enter 1 For Enqueue\n2 For Dequeue\n0 For Exit\n");
		scanf("%d",&ch);
		if(ch==1)
		{
			enqueue(Q,size,&FRONT,&REAR);
		}
		else if(ch==2)
		{
			dequeue(Q,size,&FRONT,&REAR);
		}
		else if(ch==0)
			n=0;
		else
			printf("Wrong Choice");
	}
	return 0;
}
