#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calc_hcf(int num1,int num2){
	int min = num1<num2?num1:num2;
	for (int i=min;i>=1;i--){
		if (num1%i==0 && num2%i==0){
			return i;
		}
	}
	
}

int calc_lcm(int num1,int num2){
	int max = num1<num2?num2:num1;
	while (1){
		if ((max%num1==0) && (max%num2==0)){
			return max;
		}
		++max;
	}
}

int main(){
	int num1,num2;
	printf("Enter number 1:");
	scanf("%d",&num1);
	printf("Enter number 2:");
	scanf("%d",&num2);
	int hcf=calc_hcf(num1,num2);
	int lcm = calc_lcm(num1,num2);
	printf("hcf:%d\nlcm:%d",hcf,lcm);
}
