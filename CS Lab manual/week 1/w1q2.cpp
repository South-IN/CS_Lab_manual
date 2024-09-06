#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	if (n%2){
		printf("%d is odd",n);
	}else{
		printf("%d is even",n);
	}
	return 0;
}
