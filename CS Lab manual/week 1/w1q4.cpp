#include <stdio.h>
float calc(int a,int b,char op){
	switch(op){
		case '+':
			return a+b;
		case '-':
			return a-b;
		case '*':
			return a*b;
		case '/':
			return a/b;
	}
}
int main(){
	float a,b;
	char op;
	printf("Enter number 1:");
	scanf("%f",&a);
	printf("Enter number 2:");
	scanf("%f",&b);
	printf("Enter operator:");
	getchar();
	scanf("%c",&op);
	printf("%f %c %f = %f",a,op,b,calc(a,b,op));
}
