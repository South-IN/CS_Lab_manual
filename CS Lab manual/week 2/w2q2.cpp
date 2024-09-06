#include <stdio.h>
#include <stdlib.h>

int fact(int n){
	if (n==1) return 1;
	return n*fact(n-1);
}

int main(){
	int n;
	
	bool invalidInput = true;
	while (invalidInput){
		printf("Enter number :");
		scanf("%d",&n);
		if (n<=0){
			printf("\n-----------Enter a positive integer----------\n");
			continue;
		}
		invalidInput=false;
	}
	
	
	printf("Factorial of %d is %d",n,fact(n));
}
