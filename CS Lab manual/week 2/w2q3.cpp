#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d",&n);
	bool isPrime = true;
	for (int i=2;i<sqrt(n);i++){
		if (n%i==0){
			isPrime=false;
			break;
		}
	}
	if (isPrime){
		printf("%d is prime",n);
	}else{
		printf("%d is not prime",n);
	}
}
