#include <stdio.h>
#include <stdlib.h>

int main(){
	float a,b,c;
	printf("Enter number 1:");
	scanf("%f",&a);
	printf("Enter number 2:");
	scanf("%f",&b);
	printf("Enter number 3:");
	scanf("%f",&c);
	if (a>=b && a>=c){
		printf("%f is the largest",a);
	} else if (b>=a && b>=c){
		printf("%f is the largest",b);
	} else if (c>=b && c>=a){
		printf("%f is the largest",c);
	}
	return 0;
}
