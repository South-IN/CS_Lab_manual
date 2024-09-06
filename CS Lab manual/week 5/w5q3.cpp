#include <stdio.h>
#include <stdlib.h>
#include <math.h>




bool isPrime (long long var) {	     						
	 	for(int )
}

int main(){
	int lb,ub;
	printf("Enter lower bound: ");
	scanf("%d",&lb);
	printf("Enter upper bound: ");
	scanf("%d",&ub);
	
	if (lb<=0 || ub<=0 || lb>ub){
		printf("Invalid ranges");
		return 0;
	}
	int my_file;
	
	while ()
	for (int i=lb;i<=ub;i++){
		bool isPrime = i==1?false:true;
		for (int j=2;j<sqrt(i);j++){
			if (i%j==0){
				isPrime=false;
				break;
			}
		}
		if (isPrime){
			printf("%d,",i);
		}
	}
	return 0;
}
