#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
typedef struct Stack{
	int arr[10];
	int top;
};

bool isEmpty(int top){
	if (top==-1) return true;
	else return false;
}
bool isFull(int top){
	if (top==SIZE-1) return true;
	else return false;
}
void push(Stack * st,int value){
	st->top+=1;
	st->arr[st->top]=value;
	printf("Value pushed");
	printf("\n");
}
int pop(Stack * st){
	if (isEmpty(st->top)){
		printf("\nStack is Empty\n");
		return -1;
	}
	int temp=st->arr[st->top];
	st->top-=1;
	printf("%d Successfully popped\n",temp);
	return temp;
}
void peek(Stack * st){
	if (isEmpty(st->top))
	{
		printf("\nStack is empty");
	}
	else 
	{
		printf("\nValue at top : %d",st->arr[st->top]);
	}
}


int main(){
	struct Stack * stack = (struct Stack *)malloc(sizeof(struct Stack));
	stack->top=-1;
	while (1){
		int ch;
		printf("\n1.Push into Stack\n2.Pop from Stack\n3.Peek at the top of Stack\n4.Quit");
		printf("\nEnter your choice : ");
		scanf("%d",&ch);
		if (ch==1){
			if (isFull(stack->top)){
				printf("\nStack is Full.\n");
				continue;
			}
			int val;
			printf("\nEnter Value to push");
			scanf("%d",&val);
			push(stack,val);
		}
		else if (ch==2){
			pop(stack);
		}
		else if (ch==3){
			peek(stack);
		}
		else if(ch==4){
			exit(0);
		}
	}
}
