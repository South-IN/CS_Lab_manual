#include <stdio.h>
//iterative solution to get n fibonacci terms
int main(){
	int a=0,b=1;
	int n=10;
	int sum = 0;
	printf("%d,%d,",a,b);
	for (int i=0;i<n-1;i++){
		sum = a+b;
		a = b;
		b = sum;
		printf("%d,",b);
	}
	
}


