#include <stdio.h>
#include <stdlib.h>

int main(){
	int num,sum;
	scanf("%d",&num);
	while(num){
		sum+=num%10;
		num/=10;
	}
	printf("sum of digits : %d",sum);
	return 0;
}
