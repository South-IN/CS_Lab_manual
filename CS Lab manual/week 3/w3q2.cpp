#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void getBinary(int num){
	char * res = (char *)malloc(sizeof(char));
	int count=0;
	while (num){
		int rem=num%2;
		*(res+count)=rem+'0';
		
		count+=1;
		res = (char *)realloc(res,sizeof(char)+count);
		num/=2;
	}
	for (int i=count-1;i>=0;i--){
		printf("%c",*(res+i));
	}
}

int main(){
	int num;
	printf("Enter number:");
	scanf("%d",&num);
	getBinary(num);
	return 0;
}
