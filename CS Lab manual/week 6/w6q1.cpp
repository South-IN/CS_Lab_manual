#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
typedef struct Queue{
	int data[SIZE];
	int front;
	int rear ;
};

void EnQueue(Queue * q,int value)
{
	if (q->rear==SIZE-1)
	{
		printf("Overflow!!");
	}
	else if (q->front==-1 && q->rear==-1)
	{
		q->rear++;
		q->front++;
		q->data[q->rear]=value;
	}
	else 
	{
		q->rear++;
		q->data[q->rear]=value;
	}
}
int DeQueue(Queue * q)
{
	if (q->front==-1 && q->rear==-1)
	{
		printf("Queue is Empty");
		return 0;
	}
	else if ((q->front)==q->rear)
	{
		int temp=q->data[q->front];
		q->front=-1;
		q->rear=-1;
		return temp;
	}
	else 
	{
		return q->data[q->front++];
	}
}
int peek(Queue * q)
{
	if (q->front==-1 && q->rear==-1)
	{
		return -1;
	}
	return q->data[q->front];
	
}
void printLine()
{
	printf("\n----------------------------\n");
}
int main()
{
	Queue * queue=(Queue *)malloc(sizeof(Queue));
	queue->front=-1;
	queue->rear=-1;
	while (1)
	{
		printLine();
		int ch;
		printf("\n1.EnQueue\n2.DeQueue\n3.Peek\n4.Exit\nEnter your choice:");
		scanf("%d",&ch);
		if (ch==1)
		{
			int val;
			printf("\nEnter the Value to be pushed:");
			scanf("%d",&val);
			EnQueue(queue,val);
		}
		else if (ch==2)
		{
			printf("\nValue Popped : %d",DeQueue(queue));
		}
		else if (ch==3)
		{	int ele = peek(queue);
			if (ele==-1){
				printf("Queue is Empty");
				continue;
			}
			printf("Element at Front : %d",ele);
		}
		else if (ch==4)
		{
			printf("Program Exited!");
			exit(0);
		}
		else 
		{
			printf("Invalid Choice!!\nTry Again\n");
		}
		printLine();
	}
}
