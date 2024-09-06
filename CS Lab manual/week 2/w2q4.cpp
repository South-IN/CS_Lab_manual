#include <stdio.h>
#include <stdlib.h>
int reverse(int n){
	int res = 0;
	while (n){
		res = res*10+(n%10);
		n/=10;
	}
	return res;
}

int main(){
	int n;
	scanf("%d",&n);
	if (n==reverse(n)){
		printf("pallindrome");
	}else{
		printf("not pallindrome");
	}
	
}
